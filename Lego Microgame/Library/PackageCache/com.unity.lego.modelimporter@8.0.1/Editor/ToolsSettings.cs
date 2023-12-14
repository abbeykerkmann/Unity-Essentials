// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System;
using UnityEditor;

namespace LEGOModelImporter
{
    /// <summary>
    /// Provides editor settings for the model importer package
    /// </summary>
    [InitializeOnLoad]
    public class ToolsSettings
    {
        static bool initialized = false;        

        #region Pref keys
        static readonly string stickySnapDistancePrefsKey = "com.unity.lego.modelimporter.stickySnapDistance";
        static readonly string disablePrefabAutoSavePrefsKey = "com.unity.lego.modelimporter.disablePrefabAutoSave";
        static readonly string maxTriesPerBrickPrefsKey = "com.unity.lego.modelimporter.maxTriesPerBrick";
        static readonly string selectConnectedPrefsKey = "com.unity.lego.modelimporter.selectConnected";
        static readonly string brickBuildingPrefsKey = "com.unity.lego.modelimporter.editorBrickBuilding";
        static readonly string rotateGizmoOnPrefsKey = "com.unity.lego.modelimporter.rotateGizmoOn";
        static readonly string showToolsPrefsKey = "com.unity.lego.modelimporter.showBrickBuildingTools";
#if !PUBLIC
        static readonly string autoUpdateHierarchyPrefsKey = "com.unity.lego.modelimporter.autoUpdateHierarchy";
#endif
        #endregion


        #region Shortcuts
        const string selectConnectedShortcut = "%&k";
        const string brickBuildingShortcut = "%&n";
        #endregion

        #region Menu paths
        const string disablePrefabAutoSaveMenuPath = "LEGO Tools/Disable Prefab Auto Save";
        internal const string selectConnectedMenuPath = "LEGO Tools/Select Connected Bricks";
        const string rotateGizmoOnMenuPath = "LEGO Tools/Show Rotate Gizmo";
        internal const string brickBuildingMenuPath = "LEGO Tools/Brick Building";
        const string showBrickBuildingToolsMenuPath = "LEGO Tools/Show LEGO Tools #&%b";
#if !PUBLIC
        const string autoUpdateHierarchyMenuPath = "LEGO Tools/Auto Update Hierarchy";
#endif
        #endregion

        #region Default values
        static readonly float stickySnapDistanceDefault = 20.0f;
        static readonly bool disablePrefabAutoSaveDefault = true;
        static readonly bool selectConnectedDefault = true;
        static readonly bool isBrickBuildingOnDefault = false;
        static readonly bool rotateGizmoOnDefault = true;
        static readonly bool autoUpdateHierarchyDefault = false;
        static readonly bool showToolsDefault = true;
        #endregion

        #region Settings values
        static float stickySnapDistance = stickySnapDistanceDefault;
        static bool disablePrefabAutoSave = disablePrefabAutoSaveDefault;
        static int maxTriesPerBrick = BrickBuildingUtility.DefaultMaxBricksToConsiderWhenFindingConnections;
        static bool selectConnected = selectConnectedDefault;
        static bool isBrickBuildingOn = isBrickBuildingOnDefault;
        static bool showRotateGizmo = rotateGizmoOnDefault;
        static bool autoUpdateHierarchy = autoUpdateHierarchyDefault;
        static bool showTools = showToolsDefault;
        #endregion

        #region Events

        /// <summary>
        /// Raised when the state of brick building is changed
        /// </summary>
        public static event Action<bool> brickBuildingChanged;

        /// <summary>
        /// Raised when the state of whether we select single bricks or connected is changed
        /// </summary>
        public static event Action<bool> selectConnectedChanged;

        /// <summary>
        /// Raised when the state of showing tools changes
        /// </summary>
        public static event Action<bool> showToolsChanged;
#if !PUBLIC
        /// <summary>
        /// Raised when the state of auto update hierarchy changes
        /// </summary>
        public static event Action<bool> autoUpdateHierarchyChanged;
#endif
        #endregion

        #region Public properties
        /// <summary>
        /// Whether or not to show the rotation gizmos on brick selections
        /// </summary>
        public static bool ShowRotateGizmo
        {
            get
            {
                if (!initialized)
                {
                    Initialize();
                }
                return showRotateGizmo;
            }
            set
            {
                showRotateGizmo = value;
                EditorPrefs.SetBool(rotateGizmoOnPrefsKey, showRotateGizmo);
            }
        }

        /// <summary>
        /// Whether or not to brick building is turned on
        /// </summary>
        public static bool IsBrickBuildingOn
        {
            get
            {
                if (!initialized)
                {
                    Initialize();
                }
                return isBrickBuildingOn;
            }
            set
            {
                var oldValue = isBrickBuildingOn;
                isBrickBuildingOn = value;
                EditorPrefs.SetBool(brickBuildingPrefsKey, isBrickBuildingOn);
                if(isBrickBuildingOn != oldValue)
                {
                    brickBuildingChanged?.Invoke(value);
                }
            }
        }

        /// <summary>
        /// The distance you have to move your mouse until a brick is dragged
        /// </summary>
        public static float StickySnapDistance
        {
            get
            {
                if (!initialized)
                {
                    Initialize();
                }
                return stickySnapDistance;
            }
            set
            {
                stickySnapDistance = value;
                EditorPrefs.SetFloat(stickySnapDistancePrefsKey, value);
            }
        }

        /// <summary>
        /// The max amount of tries when finding connections
        /// </summary>
        public static int MaxTriesPerBrick
        {
            get
            {
                if (!initialized)
                {
                    Initialize();
                }
                return maxTriesPerBrick;
            }
            set
            {
                maxTriesPerBrick = value;
                EditorPrefs.SetInt(maxTriesPerBrickPrefsKey, value);
            }
        }

        /// <summary>
        /// Whether or not to select connected bricks
        /// </summary>
        public static bool SelectConnected
        {
            get
            {
                if(!initialized)
                {
                    Initialize();
                }
                return selectConnected;
            }
            set
            {
                var oldValue = selectConnected;
                selectConnected = value;
                EditorPrefs.SetBool(selectConnectedPrefsKey, value);
                if (selectConnected!= oldValue)
                {
                    selectConnectedChanged?.Invoke(value);
                }
            }
        }

        /// <summary>
        /// Whether or not to show the LEGO tools
        /// </summary>
        public static bool ShowTools
        {
            get
            {
                if (!initialized)
                {
                    Initialize();
                }
                return showTools;
            }
            set
            {
                var oldValue = showTools;
                showTools = value;
                EditorPrefs.SetBool(showToolsPrefsKey, value);
                if(oldValue != showTools)
                {
                    showToolsChanged?.Invoke(showTools);
                }
            }
        }

        /// <summary>
        /// Whether or not to auto update the hierarchy
        /// </summary>
        public static bool AutoUpdateHierarchy
        {
            get
            {
                if(!initialized)
                {
                    Initialize();
                }
                return autoUpdateHierarchy;
            }
            set
            {
                var oldValue = autoUpdateHierarchy;
                autoUpdateHierarchy = value;
#if !PUBLIC
                EditorPrefs.SetBool(autoUpdateHierarchyPrefsKey, autoUpdateHierarchy);
                if(autoUpdateHierarchy != oldValue)
                {
                    autoUpdateHierarchyChanged?.Invoke(value);
                }
#endif
            }
        }
        #endregion

        static void Initialize()
        {
            disablePrefabAutoSave = EditorPrefs.GetBool(disablePrefabAutoSavePrefsKey, disablePrefabAutoSaveDefault);
            if (disablePrefabAutoSave)
            {
                EditorPrefs.SetBool("PrefabEditing.AutoSave", false);
            }
            stickySnapDistance = EditorPrefs.GetFloat(stickySnapDistancePrefsKey, stickySnapDistanceDefault);
            selectConnected = EditorPrefs.GetBool(selectConnectedPrefsKey, selectConnectedDefault);
            isBrickBuildingOn = EditorPrefs.GetBool(brickBuildingPrefsKey, isBrickBuildingOnDefault);
            showRotateGizmo = EditorPrefs.GetBool(rotateGizmoOnPrefsKey, rotateGizmoOnDefault);
            showTools = EditorPrefs.GetBool(showToolsPrefsKey, showToolsDefault);
            maxTriesPerBrick = EditorPrefs.GetInt(maxTriesPerBrickPrefsKey, BrickBuildingUtility.DefaultMaxBricksToConsiderWhenFindingConnections);

            autoUpdateHierarchy = false;
#if PUBLIC
            autoUpdateHierarchy = true;
#else
        autoUpdateHierarchy = EditorPrefs.GetBool(autoUpdateHierarchyPrefsKey, autoUpdateHierarchyDefault);
#endif
            initialized = true;
        }

        static ToolsSettings()
        {
            Initialize();
        }        


        #region Menu items
        [MenuItem(rotateGizmoOnMenuPath, priority = 40)]
        static void ToggleRotateGizmoOn()
        {
            ShowRotateGizmo = !ShowRotateGizmo;
        }

        [MenuItem(rotateGizmoOnMenuPath, validate = true)]
        static bool ValidateRotateGizmoOn()
        {
            Menu.SetChecked(rotateGizmoOnMenuPath, showRotateGizmo);
            return IsBrickBuildingOn;
        }

        [MenuItem(selectConnectedMenuPath + " " + selectConnectedShortcut, priority = 35)]
        static void ToggleSelectConnectedBricks()
        {
            SelectConnected = !SelectConnected;
        }

        [MenuItem(selectConnectedMenuPath + " " + selectConnectedShortcut, validate = true)]
        static bool ValidateSelectConnectedBricks()
        {
            Menu.SetChecked(selectConnectedMenuPath, selectConnected);
            return isBrickBuildingOn;
        }

        [MenuItem(disablePrefabAutoSaveMenuPath, priority = 45)]
        static void ToggleDisablePrefabAutoSave()
        {
            disablePrefabAutoSave = !disablePrefabAutoSave;
            EditorPrefs.SetBool(disablePrefabAutoSavePrefsKey, disablePrefabAutoSave);
        }

        [MenuItem(disablePrefabAutoSaveMenuPath, true)]
        static bool ValidateDisablePrefabAutoSave()
        {
            Menu.SetChecked(disablePrefabAutoSaveMenuPath, disablePrefabAutoSave);
            return true;
        }

        [MenuItem(brickBuildingMenuPath + " " + brickBuildingShortcut, priority = 30)]
        static void ToggleBrickBuilding()
        {
            IsBrickBuildingOn = !IsBrickBuildingOn;
        }

        [MenuItem(brickBuildingMenuPath + " " + brickBuildingShortcut, true)]
        static bool ValidateBrickBuilding()
        {
            Menu.SetChecked(brickBuildingMenuPath, isBrickBuildingOn);
            return !EditorApplication.isPlaying;
        }

        [MenuItem(showBrickBuildingToolsMenuPath, priority = 25)]
        static void ShowBrickBuildingTools()
        {
            ShowTools = !ShowTools;
        }

        [MenuItem(showBrickBuildingToolsMenuPath, true)]
        static bool ValidateShowBrickBuildingTools()
        {
            Menu.SetChecked(showBrickBuildingToolsMenuPath, ShowTools);
            return !EditorApplication.isPlaying;
        }

#if !PUBLIC
        [MenuItem(autoUpdateHierarchyMenuPath, priority = 40)]
        static void ToggleAutoUpdateHierarchy()
        {
            AutoUpdateHierarchy = !AutoUpdateHierarchy;
        }

        [MenuItem(autoUpdateHierarchyMenuPath, validate = true)]
        static bool ValidateAutoUpdateHierarchy()
        {
            Menu.SetChecked(autoUpdateHierarchyMenuPath, autoUpdateHierarchy);
            return true;
        }
#endif
        #endregion
    }
}

