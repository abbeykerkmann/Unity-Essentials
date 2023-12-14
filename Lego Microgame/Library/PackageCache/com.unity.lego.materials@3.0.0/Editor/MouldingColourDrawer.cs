// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using UnityEngine;
using UnityEditor;

namespace LEGOMaterials
{
    /// <summary>
    /// Provides a property drawer for the <see cref="MouldingColourAttribute"/>
    /// </summary>
    [CustomPropertyDrawer(typeof(MouldingColourAttribute))]
    public class MouldingColourDrawer : PropertyDrawer
    {
        static readonly float alphaBarHeight = 3.0f;
        static readonly float helpBoxHeight = 38.0f;

        /// <inheritdoc/>
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            var height = base.GetPropertyHeight(property, label);

            var colour = property.colorValue;
            var mouldingColourId = MouldingColour.GetId(colour);

            if (MouldingColour.IsLegacy(mouldingColourId))
            {
                height += EditorGUIUtility.standardVerticalSpacing + helpBoxHeight;
            }

            return height;
        }

        /// <inheritdoc/>
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            var mouldingColourAttribute = (MouldingColourAttribute)attribute;

            var colour = property.colorValue;
            var mouldingColourId = MouldingColour.GetId(colour);

            // Draw label
            var colourRect = EditorGUI.PrefixLabel(position, GUIUtility.GetControlID(FocusType.Passive), label);

            // Create box and tooltip.
            GUI.Box(new Rect(colourRect.x, colourRect.y, colourRect.width, EditorGUIUtility.singleLineHeight), new GUIContent("", ObjectNames.NicifyVariableName((int)mouldingColourId + " - " + mouldingColourId.ToString())));

            // Draw rects with colour.
            var colourBarRect = new Rect(colourRect.x + 1.0f, colourRect.y + 1.0f, colourRect.width - 2.0f, EditorGUIUtility.singleLineHeight - 2.0f - alphaBarHeight);
            var alphaBarRect = new Rect(colourRect.x + 1.0f, colourRect.y + 1.0f + colourBarRect.height, Mathf.Round((colourRect.width - 2.0f) * colour.a), alphaBarHeight);
            var blackBarRect = new Rect(colourRect.x + 1.0f + alphaBarRect.width, colourRect.y + 1.0f + colourBarRect.height, colourRect.width - 2.0f - alphaBarRect.width, alphaBarHeight);
            EditorGUI.DrawRect(colourBarRect, new Color(colour.r, colour.g, colour.b));
            EditorGUI.DrawRect(alphaBarRect, Color.white);
            EditorGUI.DrawRect(blackBarRect, Color.black);

            if (MouldingColour.IsLegacy(mouldingColourId))
            {
                EditorGUI.HelpBox(new Rect(position.x, position.y + EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing, position.width, helpBoxHeight), $"{label.text} is a legacy colour", MessageType.Warning);
            }

            // Detect click.
            if (Event.current.type == EventType.MouseDown)
            {
                if (colourRect.Contains(Event.current.mousePosition))
                {
                    MouldingColourPicker.Show((c) =>
                    {
                        property.colorValue = c;
                        property.serializedObject.ApplyModifiedProperties();
                    },
                    (int)mouldingColourId,
                    mouldingColourAttribute.excludeTransparent,
                    mouldingColourAttribute.excludeBrightYellow
                    );
                }
            }
        }
    }

}
