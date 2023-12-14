// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System;

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents settings that are used when importing model groups
    /// </summary>
    [Serializable]
    public class ModelGroupImportSettings
    {
        /// <summary>
        /// Whether or not to import colliders
        /// </summary>
        public bool colliders = true;

        /// <summary>
        /// Whether or not to import connectivity
        /// </summary>
        public bool connectivity = true;

        /// <summary>
        /// Whether or not the group should be set as static
        /// </summary>
        public bool isStatic;

        /// <summary>
        /// Whether or not to generate lightmap UVs
        /// </summary>
        public bool lightmapped;

        /// <summary>
        /// Whether or not to randomize rotation
        /// </summary>
        public bool randomizeRotation = true;

        /// <summary>
        /// The lod of the geometry in the group
        /// </summary>
        public int lod;


        /// <summary>
        /// Creates empty import settings
        /// </summary>
        public ModelGroupImportSettings()
        {

        }

        /// <summary>
        /// Copy another set of import settings
        /// </summary>
        /// <param name="importSettings">The import settings to copy</param>
        public ModelGroupImportSettings(ModelGroupImportSettings importSettings)
        {
            colliders = importSettings.colliders;
            connectivity = importSettings.connectivity;
            isStatic = importSettings.isStatic;
            lightmapped = importSettings.lightmapped;
            randomizeRotation = importSettings.randomizeRotation;
            lod = importSettings.lod;
        }

    }
}