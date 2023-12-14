// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using UnityEngine;
using UnityEditor;
using System;
using System.Collections.Generic;

namespace LEGOMaterials
{
    /// <summary>
    /// Editor window that provides a colour picker for LEGO colours
    /// </summary>
    public class MouldingColourPicker : EditorWindow
    {
        private static readonly string showLegacyColoursEditorPrefsKey = "com.unity.lego.materials.showLegacyColours";

        private static GUIStyle colourStyle, labelStyle;
        private static Action<Color> onColourPicked;
        private static bool showingLegacy, initialized, showingTransparent = true, showingBrightYellow = true;
        private static Texture2D selectionTexture;
        private static int selectedColourID;
        private static Dictionary<MouldingColour.Id, ColourState> colourStatesLib = new Dictionary<MouldingColour.Id, ColourState>();
        private static List<MouldingColour.Id> universalColours = new List<MouldingColour.Id>();
        private static List<MouldingColour.Id> genericColours = new List<MouldingColour.Id>();
        private static List<MouldingColour.Id> specialColours = new List<MouldingColour.Id>();
        private static List<MouldingColour.Id> legacyColours = new List<MouldingColour.Id>();

        private const float boxSize = 40f, margin = 3f, headerHeight = 25f;

        private static GUIContent
            universalLabelContent = new GUIContent("Universal", "This is the base LEGO® colour palette. It is the set of colours used most often."),
            genericLabelContent = new GUIContent("Generic", "This is a set of colours used on a regular basis to form a secondary colour palette."),
            specialLabelContent = new GUIContent("Special", "This is a set of colours used only for special themes, projects or elements. Newly introduced colours will always be a part of this set."),
            legacyLabelContent = new GUIContent("Legacy", "This is a set of colours no longer in production. Use only for legacy themes or models."),
            legacyToggleContent = new GUIContent("Show legacy", "Toggle to show or hide legacy colours");

        private void OnGUI()
        {
            // Layout.
            var columnCount = Mathf.FloorToInt((position.width - 3) / (boxSize + margin));
            int universalRowCount = Mathf.CeilToInt(universalColours.Count / (float)columnCount);
            int genericRowCount = Mathf.CeilToInt(genericColours.Count / (float)columnCount);
            int specialRowCount = Mathf.CeilToInt(specialColours.Count / (float)columnCount);
            int legacyRowCount = Mathf.CeilToInt(legacyColours.Count / (float)columnCount);

            float universalSize = universalRowCount * (boxSize + margin) + margin;
            float genericSize = genericRowCount * (boxSize + margin) + margin;
            float specialSize = specialRowCount * (boxSize + margin) + margin;
            float legacySize = legacyRowCount * (boxSize + margin) + margin;

            float universalHeightStart = 40f;
            float genericHeightStart = universalHeightStart + universalSize + headerHeight;
            float specialHeightStart = genericHeightStart + genericSize + headerHeight;
            float legacyHeightStart = specialHeightStart + specialSize + headerHeight;

            // Header.
            Rect headerRect = new Rect(position.width - EditorStyles.toggle.CalcSize(legacyToggleContent).x - margin, 0f, position.width, headerHeight);
            using (new GUILayout.AreaScope(headerRect))
            {
                using (var check = new EditorGUI.ChangeCheckScope())
                {
                    GUILayout.Space(4f);
                    showingLegacy = GUILayout.Toggle(showingLegacy, legacyToggleContent);
                    if (check.changed)
                    {
                        EditorPrefs.SetBool(showLegacyColoursEditorPrefsKey, showingLegacy);
                        if(showingLegacy && position.height < legacyHeightStart + legacySize)
                        {
                            position = new Rect(position.x, position.y, position.width, legacyHeightStart + legacySize);
                        }
                        else if(!showingLegacy && position.height > specialHeightStart + specialSize)
                        {
                            position = new Rect(position.x, position.y, position.width, specialHeightStart + specialSize);
                        }
                    }
                }
            }

            DrawGrid(universalLabelContent, universalColours, universalRowCount, columnCount, universalHeightStart);
            DrawGrid(genericLabelContent, genericColours, genericRowCount, columnCount, genericHeightStart);
            DrawGrid(specialLabelContent, specialColours, specialRowCount, columnCount, specialHeightStart);

            if(showingLegacy)
            {
                DrawGrid(legacyLabelContent, legacyColours, legacyRowCount, columnCount, legacyHeightStart);
            }
        }

        private void OnLostFocus()
        {
            Close();
        }

        private void DrawGrid(GUIContent content, List<MouldingColour.Id> colourIDs, int rowCount, int coloumnCount, float startHeight)
        {
            GUI.Label(new Rect(0, startHeight - EditorGUIUtility.singleLineHeight, position.width, EditorGUIUtility.singleLineHeight), content);
            // Row.
            for (int rowIndex = 0; rowIndex < rowCount; rowIndex++)
            {
                // Column.
                for (int columnIndex = 0; columnIndex < coloumnCount; columnIndex++)
                {
                    int index = rowIndex * coloumnCount + columnIndex;
                    if (index >= colourIDs.Count)
                    {
                        continue;
                    }
                    DrawColour(columnIndex, rowIndex, startHeight, colourIDs[index]);
                }
            }
        }

        private static void Initialize()
        {
            if(initialized)
            {
                return;
            }
            initialized = true;

            // Initialization.
            showingLegacy = EditorPrefs.GetBool(showLegacyColoursEditorPrefsKey, false);

            universalColours.AddRange(MouldingColour.GetUniversalIDs());
            genericColours.AddRange(MouldingColour.GetGenericIDs());
            specialColours.AddRange(MouldingColour.GetSpecialIDs());
            legacyColours.AddRange(MouldingColour.GetLegacyIDs());

            foreach (var colourID in MouldingColour.GetAllColourIDs())
            {
                // Retrieve and create settings.
                ColourState state = new ColourState(colourID);
                colourStatesLib[colourID] = state;
            }

            // Styles.
            colourStyle = new GUIStyle(GUI.skin.button);
            colourStyle.fixedWidth = boxSize;
            colourStyle.fixedHeight = boxSize;

            labelStyle = new GUIStyle(GUI.skin.label);
            labelStyle.alignment = TextAnchor.LowerRight;

            selectionTexture = AssetDatabase.LoadAssetAtPath("Packages/com.unity.lego.materials/Textures/ColourSelection@2x.png", typeof(Texture2D)) as Texture2D;
        }

        private static void IncludeTransparent()
        {
            if(showingTransparent)
            {
                return;
            }
            showingTransparent = true;

            IEnumerable<MouldingColour.Id> mouldingColorIDs = MouldingColour.GetAllColourIDs();
            foreach (var colourId in mouldingColorIDs)
            {
                if (colourStatesLib[colourId].isTransparent)
                {
                    if (MouldingColour.IsUniversal(colourId))
                    {
                        universalColours.Add(colourId);
                    }
                    else if (MouldingColour.IsGeneric(colourId))
                    {
                        genericColours.Add(colourId);
                    }
                    else if (MouldingColour.IsSpecial(colourId))
                    {
                        specialColours.Add(colourId);
                    }
                    else
                    {
                        legacyColours.Add(colourId);
                    }
                }
            }
        }

        private static void ExcludeTransparent()
        {
            if (!showingTransparent)
            {
                return;
            }
            showingTransparent= false;

            IEnumerable<MouldingColour.Id> mouldingColorIDs = MouldingColour.GetAllColourIDs();
            foreach (var colourId in mouldingColorIDs)
            {
                if (colourStatesLib[colourId].isTransparent)
                {
                    if (MouldingColour.IsUniversal(colourId))
                    {
                        universalColours.Remove(colourId);
                    }
                    else if (MouldingColour.IsGeneric(colourId))
                    {
                        genericColours.Remove(colourId);
                    }
                    else if (MouldingColour.IsSpecial(colourId))
                    {
                        specialColours.Remove(colourId);
                    }
                    else
                    {
                        legacyColours.Remove(colourId);
                    }
                }
            }
        }

        private static void IncludeBrightYellow()
        {
            if (!showingBrightYellow)
            {
                return;
            }
            showingBrightYellow = true;

            universalColours.Add(MouldingColour.Id.BrightYellow);
        }

        private static void ExcludeBrightYellow()
        {
            if (showingBrightYellow)
            {
                return;
            }
            showingBrightYellow = false;

            universalColours.Remove(MouldingColour.Id.BrightYellow);
        }

        /// <summary>
        /// Opens a colour-picker window with a selection of Lego colours.
        /// </summary>
        /// <param name="colourPicked">Delegate for the event when a colour is picked.</param>
        /// <param name="selectedID">If a color should be marked as selected, provide its ID here</param>
        /// <param name="excludeTransparent">Should the list of colours exclude transparent ones?</param>
        /// <param name="excludeBrightYellow">Should the list of colours exclude the bright yellow one?</param>
        /// <returns></returns>
        public static MouldingColourPicker Show(Action<Color> colourPicked, int selectedID = 0, bool excludeTransparent = false, bool excludeBrightYellow = false)
        {
            selectedColourID = selectedID;
            onColourPicked = colourPicked;

            if (!initialized)
            {
                Initialize();
            }

            if(showingBrightYellow && excludeBrightYellow)
            {
                ExcludeBrightYellow();
            }
            else if (!showingBrightYellow && !excludeBrightYellow)
            {
                IncludeBrightYellow();
            }

            if(showingTransparent && excludeTransparent)
            {
                ExcludeTransparent();
            }
            else if(!showingTransparent && !excludeTransparent)
            {
                IncludeTransparent();
            }

            var window = GetWindow<MouldingColourPicker>(true, "Moulding Colour Picker", true);
            return window;
        }

        /// <summary>
        /// Draws a colour in a grid like structure. Checks for mouse down event and calls onColourPicked delegate and closes window if true.
        /// </summary>
        /// <param name="x">Grid value x.</param>
        /// <param name="y">Grid value y.</param>
        /// <param name="heightOffset">Offset from 0.</param>
        /// <param name="colourID">The ID of the colour to draw.</param>
        private void DrawColour(int x, int y, float heightOffset, MouldingColour.Id colourID)
        {
            var colour = MouldingColour.GetColour(colourID);
            var drawRect = new Rect(x * (boxSize + margin) + margin, heightOffset + y * (boxSize + margin) + margin, boxSize, boxSize);
            var boxRect = new Rect(drawRect.x - 1.0f, drawRect.y - 1.0f, drawRect.width + 2.0f, drawRect.height + 2.0f);
            var labelRect = new Rect(drawRect.x + 2.0f, drawRect.y + 1.0f, drawRect.width - 4.0f, drawRect.height - 2.0f);
            ColourState colourState = colourStatesLib[colourID];
            GUI.Box(boxRect, new GUIContent("", colourState.name));

            EditorGUI.DrawTextureTransparent(drawRect, colourState.texture, ScaleMode.ScaleToFit);

            if (selectedColourID.Equals((int)colourID))
            {
                GUI.DrawTexture(new Rect(boxRect.position, boxRect.size), selectionTexture);
            }

            labelStyle.normal.textColor = colourState.labelColour;
            labelStyle.hover.textColor = colourState.labelColour;
            GUI.Label(labelRect, ((int)colourID).ToString(), labelStyle);

            // Detect click.
            if (Event.current.type == EventType.MouseDown)
            {
                if (boxRect.Contains(Event.current.mousePosition))
                {
                    onColourPicked(MouldingColour.GetColour(colourID));
                    Close();
                }
            }
        }

        private class ColourState
        {
            public ColourState(MouldingColour.Id colourID)
            {
                colour = MouldingColour.GetColour(colourID);
                Texture2D colourTex = new Texture2D(1, 1);
                colourTex.SetPixel(0, 0, colour);
                colourTex.Apply();
                texture = colourTex;
                name = ObjectNames.NicifyVariableName(colourID.ToString());
                isTransparent = MouldingColour.IsTransparent(colourID);
                labelColour = colour.grayscale > 0.3f ? Color.black : Color.white;
            }
            public Texture2D texture;
            public string name;
            public bool isTransparent;
            public Color colour, labelColour;
        }
    }
}