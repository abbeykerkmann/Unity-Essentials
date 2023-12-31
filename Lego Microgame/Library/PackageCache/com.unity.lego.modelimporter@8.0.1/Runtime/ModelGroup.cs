﻿// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.Collections.Generic;
using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents a model group, which can contain any number of bricks
    /// </summary>
#if UNITY_EDITOR
    [ExecuteInEditMode]
#endif
    [SelectionBase]
    public class ModelGroup : MonoBehaviour
    {
        /// <summary>
        /// Flags used by processing for view based optimizations
        /// </summary>
        [Flags]
        public enum ViewBasedOptimizations
        {
            /// <summary>
            /// No view based optimizations
            /// </summary>
            None = 0,

            /// <summary>
            /// Remove invisible insides
            /// </summary>
            RemoveInvisibleInsides = 1 << 0,

            /// <summary>
            /// Remove invisible outsides
            /// </summary>
            RemoveInvisibleOutsides = 1 << 1,

            /// <summary>
            /// Do backface culling
            /// </summary>
            BackfaceCulling = 1 << 2,

            /// <summary>
            /// Sort front to back
            /// </summary>
            SortFrontToBack = 1 << 3,

            /// <summary>
            /// Apply all view based optimizations
            /// </summary>
            Everything = ~0,
        }

        /// <summary>
        /// Basic set of view based optimizations
        /// </summary>
        public static ViewBasedOptimizations ViewBasedGeometryRemovalOptimizations = ViewBasedOptimizations.RemoveInvisibleInsides | ViewBasedOptimizations.RemoveInvisibleOutsides | ViewBasedOptimizations.BackfaceCulling;

        /*    [Flags]
            public enum Imperfections
            {
                None = 0,
                RandomizeNormals = 1 << 0,
                UVDegradation = 1 << 1,
                Scratches = 1 << 2,
                Everything = ~0,
            }*/

        /// <summary>
        /// The name on the group set on import
        /// </summary>
        public string groupName;

        /// <summary>
        /// The name of the parent model set in import
        /// </summary>
        public string parentName;

        /// <summary>
        /// The group number in the imported parent model
        /// </summary>
        public int number;

        /// <summary>
        /// The import settings of this model group
        /// </summary>
        public ModelGroupImportSettings importSettings;

        /// <summary>
        /// The view based optimizations this model group has been processed with
        /// </summary>
        public ViewBasedOptimizations viewBasedOptimizations = ViewBasedOptimizations.None;

        /// <summary>
        /// Whether or not normals have been randomized on processing
        /// </summary>
        public bool randomizeNormals = false;
        //public Imperfections imperfections = Imperfections.Everything;

        /// <summary>
        /// Whether or not this model group has been processed
        /// </summary>
        public bool processed;

        /// <summary>
        /// The absolute file batch of this model group
        /// </summary>
        public string absoluteFilePath;

        /// <summary>
        /// The relative file batch of this model group
        /// </summary>
        public string relativeFilePath;

        /// <summary>
        /// Whether or not this model group is auto generated
        /// </summary>
        /// <remarks>
        /// Auto generated groups have the limitation that they cannot be reimported.
        /// Usually auto generated groups only exist because auto update hierarchy has been turned on.
        /// </remarks>
        public bool autoGenerated;

        /// <summary>
        /// A list of camera views that will be used for view based optimizations
        /// </summary>
        public List<CullingCameraConfig> views = new List<CullingCameraConfig>();

        /// <summary>
        /// Disconnect all bricks from this group
        /// </summary>
        public void DisconnectGroup()
        {
            var bricksInGroup = GetComponentsInChildren<Brick>();
            foreach (var brick in bricksInGroup)
            {
                brick.DisconnectInverse(bricksInGroup);
            }
        }

#if UNITY_EDITOR
        internal static event Action<ModelGroup> onParentChange;
        internal static event Action<ModelGroup> onChildrenChange;

        void OnTransformParentChanged()
        {
            onParentChange?.Invoke(this);
        }

        void OnTransformChildrenChanged()
        {
            onChildrenChange?.Invoke(this);
        }
#endif

        void OnDrawGizmosSelected()
        {
            if (!processed && viewBasedOptimizations != 0)
            {
                Gizmos.color = Color.cyan;
                int index = 0;
                foreach (var view in views)
                {
                    Gizmos.matrix = Matrix4x4.TRS(view.position, view.rotation, Vector3.one);
                    if (view.perspective)
                    {
#if UNITY_EDITOR
                        Handles.Label(view.position, string.IsNullOrEmpty(view.name) ? "View " + index : view.name);
#endif
                        Gizmos.DrawFrustum(Vector3.zero, view.fov, view.maxRange, view.minRange, view.aspect);
                    }
                    else
                    {
#if UNITY_EDITOR
                        Handles.Label(view.position, string.IsNullOrEmpty(view.name) ? "View " + index : view.name);
#endif
                        var center = Vector3.forward * (view.minRange + view.maxRange) * 0.5f;
                        var size = new Vector3(view.size * 2.0f * view.aspect, view.size * 2.0f, view.maxRange - view.minRange);
                        Gizmos.DrawWireCube(center, size);
                    }
                    index++;
                }
            }
        }
    }

}