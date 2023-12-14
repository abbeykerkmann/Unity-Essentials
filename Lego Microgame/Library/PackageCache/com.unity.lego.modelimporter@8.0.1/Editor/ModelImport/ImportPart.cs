// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.Linq;

namespace LEGOModelImporter
{
    /// <summary>
    /// Editor window for importing parts
    /// </summary>
    public class ImportPart : EditorWindow
    {
        static Texture logoTexture;

        static List<string> partList;
        static List<string> filteredPartList = new List<string>();
        static string searchPart;
        static Vector2 scrollPosition;

        static readonly int leftMargin = 20;
        static readonly string[] lodOptions = { "LOD 0", "LOD 1", "LOD 2" };

        static int currentButton = -1;

        static ModelGroupImportSettings importSettings = new ModelGroupImportSettings();


        [MenuItem("LEGO Tools/Import Part #&%p", priority = 0)]
        static void FindPartNumber()
        {
            if (partList == null)
            {
                partList = PartUtility.GetPartList();
            }

            searchPart = "";
            filteredPartList.Clear();

            GetWindow<ImportPart>(true, "LEGO Part Importer");
        }

        private void OnEnable()
        {
            logoTexture = AssetDatabase.LoadAssetAtPath<Texture>("Packages/com.unity.lego.modelimporter/Textures/LEGO logo.png");
        }

        private void OnGUI()
        {
            var labelWidth = 110.0f;

            minSize = new Vector2(leftMargin + labelWidth + 260, 226);
            maxSize = new Vector2(leftMargin + labelWidth + 260, 2000);

            var buttonStyle = new GUIStyle(GUI.skin.button);
            buttonStyle.margin = new RectOffset(leftMargin, leftMargin, 0, 0);
            var textFieldStyle = new GUIStyle(GUI.skin.textField);
            textFieldStyle.margin = new RectOffset(leftMargin, leftMargin, 0, 0);
            var labelStyle = new GUIStyle(GUI.skin.label);
            labelStyle.margin = new RectOffset(leftMargin, leftMargin, 0, 0);

            scrollPosition = GUILayout.BeginScrollView(scrollPosition, false, false);

            GUI.Box(new Rect(20, 20, 100, 100), logoTexture);

            CreateHeaderUI(new Vector2(leftMargin + labelWidth + 20.0f, 100.0f), "Colliders", "Add colliders to bricks.");
            CreateHeaderUI(new Vector2(leftMargin + labelWidth + 50.0f, 100.0f), "Connectivity", "Add connectivity to bricks. Connectivity requires colliders.");

            CreateHeaderUI(new Vector2(leftMargin + labelWidth + 100.0f, 100.0f), "Static", "Make bricks static.");
            CreateHeaderUI(new Vector2(leftMargin + labelWidth + 130.0f, 100.0f), "Lightmapped", "Add lightmap UVs to bricks. Bricks must be static to be lightmapped.");

            CreateHeaderUI(new Vector2(leftMargin + labelWidth + 180.0f, 100.0f), "LOD", "LOD 0 includes chamfered edges.\nLOD 1 does not.\nLOD 2 simplifies knobs.");

            // Reserve the space for the GUILayout scroll view.
            GUILayout.Space(135.0f);
            var nextY = 135.0f;

            GUI.Label(new Rect(leftMargin, nextY, labelWidth, 20.0f), "Settings");

            CreateBoolUI(new Vector2(leftMargin + labelWidth + 15.0f, nextY), importSettings, "colliders",  "connectivity", null);
            CreateBoolUI(new Vector2(leftMargin + labelWidth + 45.0f, nextY), importSettings, "connectivity", null, "colliders");

            CreateBoolUI(new Vector2(leftMargin + labelWidth + 95.0f, nextY), importSettings, "isStatic", "lightmapped", null);
            CreateBoolUI(new Vector2(leftMargin + labelWidth + 125.0f, nextY), importSettings, "lightmapped", null, "isStatic");

            CreateLODUI(new Vector2(leftMargin + labelWidth + 175.0f, nextY), importSettings);

            // Reserve the space for the GUILayout scroll view.
            GUILayout.Space(25.0f);
            nextY += 25.0f;

            // Check keyboard navigation input.
            var enterPressedInField = false;
            if (Event.current.type == EventType.KeyDown)
            {
                var code = Event.current.keyCode;
                if ((code >= KeyCode.Alpha0 && code <= KeyCode.Alpha9) || (code >= KeyCode.Keypad0 && code <= KeyCode.Keypad9))
                {
                    currentButton = -1;
                }
                else if (code == KeyCode.DownArrow || (code == KeyCode.Tab && (Event.current.modifiers & EventModifiers.Shift) == 0))
                {
                    currentButton++;
                }
                else if (code == KeyCode.UpArrow || (code == KeyCode.Tab && (Event.current.modifiers & EventModifiers.Shift) == EventModifiers.Shift))
                {
                    currentButton = Mathf.Max(-1, currentButton - 1);
                }
                else if (code == KeyCode.Return || code == KeyCode.KeypadEnter)
                {
                    enterPressedInField = currentButton == -1;
                }
            }

            EditorGUI.BeginChangeCheck();

            GUI.SetNextControlName("InputField");
            searchPart = EditorGUI.TextField(new Rect(leftMargin, nextY, position.width - 2 * leftMargin, 20f), "Design ID", searchPart);

            if (currentButton == -1)
            {
                EditorGUI.FocusTextInControl("InputField");
                Repaint();
            }

            // Reserve the space for the GUILayout scroll view.
            GUILayout.Space(25.0f);
            nextY += 25.0f;

            if (EditorGUI.EndChangeCheck())
            {
                if (searchPart.Length > 0)
                {
                    filteredPartList = partList.FindAll(x => x.Contains(searchPart));
                }
                else
                {
                    filteredPartList.Clear();
                }
            }

            bool importPressed = false;
            var buttonIndex = 0;
            for (var i = 0; i < Mathf.Min(filteredPartList.Count, 30); ++i)
            {
                GUI.SetNextControlName("Button" + buttonIndex);
                importPressed = GUI.Button(new Rect(leftMargin, nextY, position.width - 2 * leftMargin, 24f), filteredPartList[i], buttonStyle);
                if (importPressed || enterPressedInField)
                {
                    // Check for connectivity updates.
                    AssetVersionChecker.CheckForUpdates();

                    var brick = PartImporter.InstantiateBrick(filteredPartList[i], 1, importSettings);
                    var camera = SceneView.lastActiveSceneView.camera;
                    if (camera)
                    {
                        var cameraRay = new Ray(camera.transform.position, camera.transform.forward);

                        var bricks = new HashSet<Brick>();
                        bricks.Add(brick);
                        var sourceBrick = bricks.First();

                        BrickBuildingUtility.AlignBricks(sourceBrick, bricks, BrickBuildingUtility.ComputeBounds(bricks), sourceBrick.transform.position, Vector3.zero, cameraRay,
                        new Plane(Vector3.up, Vector3.zero), 100.0f, out Vector3 alignedOffset, out _, out _, out _, out _);

                        var offsetPosition = brick.transform.position + alignedOffset;

                        brick.transform.position = offsetPosition;
                    }

                    Selection.activeGameObject = brick.gameObject;
                    Physics.SyncTransforms();

                    SceneBrickBuilder.SyncAndUpdateBrickCollision(true);

                    break;
                }

                if (buttonIndex == currentButton)
                {
                    GUI.FocusControl("Button" + buttonIndex);
                    Repaint();
                }

                buttonIndex++;

                // Reserve the space for the GUILayout scroll view.
                GUILayout.Space(29.0f);
                nextY += 29.0f;
            }

            if (currentButton >= buttonIndex)
            {
                currentButton = -1;
            }

            if (searchPart.Length > 0 && filteredPartList.Count == 0)
            {
                GUILayout.Label("No matches", labelStyle);
            }

            GUILayout.EndScrollView();

            if (importPressed || enterPressedInField)
            {
                this.Close();
            }
        }

        private static void CreateHeaderUI(Vector2 position, string header, string tooltip)
        {
            GUIUtility.RotateAroundPivot(-45.0f, position + new Vector2(5.0f, 15.0f));
            GUI.Label(new Rect(position, new Vector2(150.0f, 20.0f)), new GUIContent(header, tooltip), EditorStyles.boldLabel);
            GUIUtility.RotateAroundPivot(45.0f, position + new Vector2(5.0f, 15.0f));
        }

        private static void CreateBoolUI(Vector2 position, ModelGroupImportSettings importSettings, string valueName, string onFalseName = null, string onTrueName = null)
        {
            var type = typeof(ModelGroupImportSettings);
            var valueField = type.GetField(valueName);
            var onFalseField = onFalseName != null ? type.GetField(onFalseName) : null;
            var onTrueField = onTrueName != null ? type.GetField(onTrueName) : null;

            var newValue = EditorGUI.Toggle(new Rect(position, new Vector2(16, 16)), (bool)valueField.GetValue(importSettings));
            valueField.SetValue(importSettings, newValue);

            if (onFalseField != null && !newValue)
            {
                onFalseField.SetValue(importSettings, false);
            }
            if (onTrueField != null && newValue)
            {
                onTrueField.SetValue(importSettings, true);
            }
        }

        private static void CreateLODUI(Vector2 position, ModelGroupImportSettings importSettings)
        {
            importSettings.lod = EditorGUI.Popup(new Rect(position, new Vector2(64, 16)), importSettings.lod, lodOptions);
        }
    }
}