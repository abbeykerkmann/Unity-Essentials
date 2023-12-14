// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using UnityEngine;

namespace LEGOMaterials
{
    /// <summary>
    /// Attribute that provides information about whether or not to exlude transparent colours and bright yellow
    /// </summary>
    public class MouldingColourAttribute : PropertyAttribute
    {
        /// <summary>
        /// Whether or not to exclude transparent colours
        /// </summary>
        public bool excludeTransparent;

        /// <summary>
        /// Whether or not to exclude bright yello
        /// </summary>
        public bool excludeBrightYellow;

        /// <summary>
        /// Initializes and returns an instance of <see cref="MouldingColourAttribute"/>
        /// </summary>
        /// <param name="excludeTransparent">Whether or not to exclude transparent colours</param>
        /// <param name="excludeBrightYellow">Whether or not to exclude bright yellow</param>
        public MouldingColourAttribute(bool excludeTransparent = false, bool excludeBrightYellow = false)
        {
            this.excludeTransparent = excludeTransparent;
            this.excludeBrightYellow = excludeBrightYellow;
        }
    }
}