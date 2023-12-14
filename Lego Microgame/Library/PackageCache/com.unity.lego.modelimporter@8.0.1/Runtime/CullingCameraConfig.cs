// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using UnityEngine;

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents a camera configuration used for culling and view based optimizations
    /// </summary>
    [System.Serializable]
    public class CullingCameraConfig
    {
        [SerializeField]
        private bool foldout;

        /// <summary>
        /// THe name of the configuration
        /// </summary>
        public string name;

        /// <summary>
        /// Whether or not the view is perspective or orthogonal
        /// </summary>
        public bool perspective;

        /// <summary>
        /// The position of the camera
        /// </summary>
        public Vector3 position;

        /// <summary>
        /// The rotation of the camera
        /// </summary>
        public Quaternion rotation;

        /// <summary>
        /// The size of the view
        /// </summary>
        /// <remarks>
        /// Only used for orthographic configurations
        /// </remarks>
        public float size;

        /// <summary>
        /// The field of view of the camera
        /// </summary>
        public float fov;

        /// <summary>
        /// The max range of the camera
        /// </summary>
        /// <remarks>
        /// This is usually the far plane
        /// </remarks>
        public float maxRange;

        /// <summary>
        /// The min range of the camera
        /// </summary>
        /// <remarks>
        /// This is usually the near plane
        /// </remarks>
        public float minRange;

        /// <summary>
        /// The aspect ratio of the camera
        /// </summary>
        public float aspect;
    }

}