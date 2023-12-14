// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

namespace LEGOModelImporter
{
    [InitializeOnLoad]
    internal static class BrickHider
    {
        private const string showAllBricksShortcut = "%&r";
        private static readonly string showAllBricksPrefsKey = "com.unity.lego.modelimporter.showAllBricks";
        private const string showAllBricksMenuPath = "LEGO Tools/Show Bricks In Hierarchy";

#if PUBLIC
    private static bool showAllBricksDefault = false;
#else
    private static bool showAllBricksDefault = true;
#endif
      
        private static bool showAllBricks = showAllBricksDefault;
        static BrickHider()
        {
            showAllBricks = EditorPrefs.GetBool(showAllBricksPrefsKey, showAllBricksDefault);
            SetShowBricks(showAllBricks);

            EditorApplication.update -= EditorUpdate;
            PrefabStage.prefabStageClosing -= OnPrefabStageClosing;
            PrefabStage.prefabStageOpened -= OnPrefabStageOpened;

            Undo.undoRedoPerformed -= UndoRedoPerformed;

            EditorSceneManager.activeSceneChangedInEditMode -= ActiveSceneChanged;

            EditorApplication.update += EditorUpdate;            

            PrefabStage.prefabStageClosing += OnPrefabStageClosing;
            PrefabStage.prefabStageOpened += OnPrefabStageOpened;

            Undo.undoRedoPerformed += UndoRedoPerformed;

            EditorSceneManager.activeSceneChangedInEditMode += ActiveSceneChanged;
        }

        private static void UndoRedoPerformed()
        {
            SetShowBricks(showAllBricks);
        }

        private static void OnPrefabStageOpened(PrefabStage stage)
        {
            var bricks = StageUtility.GetCurrentStageHandle().FindComponentsOfType<Brick>();
            SetShowBricks(showAllBricks, bricks);
        }

        private static void OnPrefabStageClosing(PrefabStage stage)
        {
            // When closing, we want the bricks that are in the scene
            var bricks = StageUtility.GetMainStageHandle().FindComponentsOfType<Brick>();
            SetShowBricks(showAllBricks, bricks);
        }

        private static void ActiveSceneChanged(Scene previous, Scene active)
        {
            var bricks = StageUtility.GetCurrentStageHandle().FindComponentsOfType<Brick>();
            SetShowBricks(showAllBricks, bricks);
        }

        private static bool HasFlag(GameObject go)
        {
            return showAllBricks == go.hideFlags.HasFlag(HideFlags.HideInHierarchy);
        }

        private static void EditorUpdate()
        {
            var selection = Selection.activeTransform;
            if(selection && selection.hasChanged)
            {
                var bricksInSelection = new HashSet<Brick>();
                foreach(Transform go in Selection.transforms)
                {
                    if(!go)
                    {
                        continue;
                    }
                    if(showAllBricks && go.hideFlags.HasFlag(HideFlags.HideInHierarchy) ||
                    !showAllBricks && !go.hideFlags.HasFlag(HideFlags.HideInHierarchy))
                    {
                        bricksInSelection.UnionWith(go.GetComponentsInChildren<Brick>());
                    }
                }
                SetShowBricks(showAllBricks, bricksInSelection);
            }
        }

        private static void SetShowBricks(bool show, ICollection<Brick> bricks)
        {
            EditorPrefs.SetBool(showAllBricksPrefsKey, show);
            showAllBricks = show;
            foreach(var brick in bricks)
            {
                if(showAllBricks)
                {
                    brick.transform.hideFlags &= ~HideFlags.HideInHierarchy;
                }
                else
                {
                    brick.transform.hideFlags |= HideFlags.HideInHierarchy;
                }                
            }
            EditorApplication.DirtyHierarchyWindowSorting();
        }

        private static void SetShowBricks(bool show)
        {
            var bricksInScene = StageUtility.GetCurrentStageHandle().FindComponentsOfType<Brick>();
            SetShowBricks(show, bricksInScene);
        }

        [MenuItem(showAllBricksMenuPath + " " + showAllBricksShortcut, priority = 40)]
        private static void ShowAllBricks()
        {
            var show = !EditorPrefs.GetBool(showAllBricksPrefsKey, showAllBricksDefault);
            EditorPrefs.SetBool(showAllBricksPrefsKey, show);
            SetShowBricks(show);
        }

        [MenuItem(showAllBricksMenuPath + " " + showAllBricksShortcut, validate = true)]
        private static bool ValidateShowAllBricks()
        {
            Menu.SetChecked(showAllBricksMenuPath, EditorPrefs.GetBool(showAllBricksPrefsKey, showAllBricksDefault));
            return true;
        }
    }
}