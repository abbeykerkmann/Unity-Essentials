// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using UnityEngine;

namespace LEGOModelImporter
{
    /// <summary>
    /// Provides extension methods for Vector3
    /// </summary>
    internal static class Vector3Ext
    {
        /// <summary>
        /// Clamp a vector between two values
        /// </summary>
        /// <param name="v">The vector to clamp</param>
        /// <param name="min">The minimum value</param>
        /// <param name="max">The maximum value</param>
        /// <returns>Returns a clamped vector</returns>
        public static Vector3 Clamp(this Vector3 v, float min, float max)
        {
            return new Vector3(Mathf.Clamp(v.x, min, max), Mathf.Clamp(v.y, min, max), Mathf.Clamp(v.z, min, max));
        }

        /// <summary>
        /// Clamp a vector between 0 and 1
        /// </summary>
        /// <param name="v">The vector to clamp</param>
        /// <returns>Returns the clamped vector</returns>
        public static Vector3 Clamp01(this Vector3 v)
        {
            return new Vector3(Mathf.Clamp01(v.x), Mathf.Clamp01(v.y), Mathf.Clamp01(v.z));
        }

        /// <summary>
        /// Get a vector with the absolute value of each component
        /// </summary>
        /// <param name="v">The vector</param>
        /// <returns>Returns a vector with absolute components</returns>
        public static Vector3 Abs(this Vector3 v)
        {
            return new Vector3(Mathf.Abs(v.x), Mathf.Abs(v.y), Mathf.Abs(v.z));
        }

        /// <summary>
        /// Get a vector with the signs of the given vector
        /// </summary>
        /// <param name="v">The vector</param>
        /// <returns>Returns a vector with sign values of the input vector</returns>
        public static Vector3 Sign(this Vector3 v)
        {
            return new Vector3(Mathf.Sign(v.x), Mathf.Sign(v.y), Mathf.Sign(v.z));
        }

        /// <summary>
        /// Get the index of the major axis of a vector
        /// </summary>
        /// <remarks>
        /// The major axis is the axis with the highest absolute value
        /// </remarks>
        /// <param name="v">The vector</param>
        /// <returns>Returns the index of the major axis</returns>
        public static int MajorAxis(this Vector3 v)
        {
            float x = Mathf.Abs(v.x);
            float y = Mathf.Abs(v.y);
            float z = Mathf.Abs(v.z);
            if (x > y && x > z)
                return 0;
            if (y > z)
                return 1;
            return 2;
        }

        /// <summary>
        /// Snap the vector to its major axis, meaning it only has at most one component greater than 0
        /// </summary>
        /// <param name="v">The vector</param>
        /// <returns>Returns a new vector with snapped to the major axis of the input axis</returns>
        public static Vector3 SnapToMajorAxis(this Vector3 v)
        {
            Vector3 v2 = new Vector3();
            int axis = v.MajorAxis();
            v2[axis] = Mathf.Sign(v[axis]);
            return v2;
        }
    }

}