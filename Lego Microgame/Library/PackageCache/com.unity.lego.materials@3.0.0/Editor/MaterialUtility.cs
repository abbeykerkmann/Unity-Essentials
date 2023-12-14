// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.IO;
using System;
using UnityEngine;
using UnityEditor;

namespace LEGOMaterials
{
    /// <summary>
    /// Provides methods for loading materials and determining material existence.
    /// </summary>
    public static class MaterialUtility
    {
        /// <summary>
        /// Options for determining material existence
        /// </summary>
        public enum MaterialExistence
        {
            /// <summary>
            /// Describes a non-existent material
            /// </summary>
            None,

            /// <summary>
            /// Describes a legacy material
            /// </summary>
            Legacy,

            /// <summary>
            /// Describes a current material
            /// </summary>
            Current
        }

        /// <summary>
        /// Checks if a material exists
        /// </summary>
        /// <param name="id">The <see cref="MouldingColour.Id"/> to check for</param>
        /// <returns>Returns <see cref="MaterialExistence.Current>"/> if the colour is current, <see cref="MaterialExistence.Legacy"/> if it is legacy, <see cref="MaterialExistence.None"/> if it doesn't exist.</returns>
        public static MaterialExistence CheckIfMaterialExists(MouldingColour.Id id)
        {
            if (File.Exists(MaterialPathUtility.GetPath(id)))
            {
                return MaterialExistence.Current;
            }

            if (File.Exists(MaterialPathUtility.GetPath(id, true)))
            {
                return MaterialExistence.Legacy;
            }

            return MaterialExistence.None;
        }

        /// <summary>
        /// Checks if a material exists
        /// </summary>
        /// <param name="id">The <see langword="string"/> id to check for</param>
        /// <returns>Returns <see cref="MaterialExistence.Current>"/> if the colour is current, <see cref="MaterialExistence.Legacy"/> if it is legacy, <see cref="MaterialExistence.None"/> if it doesn't exist.</returns>
        public static MaterialExistence CheckIfMaterialExists(string id)
        {
            try
            {
                return CheckIfMaterialExists((MouldingColour.Id)Enum.Parse(typeof(MouldingColour.Id), id));
            }
            catch
            {
                Debug.LogErrorFormat("Invalid moulding colour id {0}", id);
                return MaterialExistence.None;
            }
        }

        /// <summary>
        /// Checks if a material exists
        /// </summary>
        /// <param name="id">The <see langword="int"/> id to check for</param>
        /// <returns>Returns <see cref="MaterialExistence.Current>"/> if the colour is current, <see cref="MaterialExistence.Legacy"/> if it is legacy, <see cref="MaterialExistence.None"/> if it doesn't exist.</returns>
        public static MaterialExistence CheckIfMaterialExists(int id)
        {
            return CheckIfMaterialExists(id.ToString());
        }

        /// <summary>
        /// Loads a <see cref="Material"/> asset
        /// </summary>
        /// <remarks>This function is a no-op and returns null outside of the Unity editor.</remarks>
        /// <param name="id">The <see cref="MouldingColour.Id"/> to load</param>
        /// <param name="legacy">Whether or not the material is a legacy material</param>
        /// <returns>Returns the <see cref="Material"/> asset corresponding to the id.</returns>
        public static Material LoadMaterial(MouldingColour.Id id, bool legacy)
        {
#if UNITY_EDITOR
            return AssetDatabase.LoadAssetAtPath<Material>(MaterialPathUtility.GetPath(id, legacy));
#else
            return null;
#endif
        }

        /// <summary>
        /// Loads a <see cref="Material"/> asset
        /// </summary>
        /// <param name="id">The <see langword="string"/> id to load</param>
        /// <param name="legacy">Whether or not the material is a legacy material</param>
        /// <returns>Returns the <see cref="Material"/> asset corresponding to the id</returns>
        public static Material LoadMaterial(string id, bool legacy)
        {
            try
            {
                return LoadMaterial((MouldingColour.Id)Enum.Parse(typeof(MouldingColour.Id), id), legacy);
            }
            catch
            {
                Debug.LogErrorFormat("Invalid moulding colour id {0}", id);
                return null;
            }
        }

        /// <summary>
        /// Loads a <see cref="Material"/> asset
        /// </summary>
        /// <param name="id">The <see langword="int"/> id to load</param>
        /// <param name="legacy">Whether or not the material is a legacy material</param>
        /// <returns>Returns the <see cref="Material"/> asset corresponding to the id</returns>
        public static Material LoadMaterial(int id, bool legacy)
        {
            return LoadMaterial(id.ToString(), legacy);
        }
    }

}