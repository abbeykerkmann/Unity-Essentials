// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System;

namespace LEGOModelImporter
{
    /// <summary>
    /// Provides utility methods for parsing material and decoration strings
    /// </summary>
    internal static class ParseUtils
    {
        /// <summary>
        /// Reads out color and shader ids from material list. 
        /// </summary>
        /// <param name="str">Material string</param>
        /// <returns>Returns an array of LXFML materials</returns>
        public static LXFMLDoc.Brick.Part.Material[] StringOfMaterialToMaterialArray(string str)
        {
            if (string.IsNullOrEmpty(str))
            {
                return new LXFMLDoc.Brick.Part.Material[] { };
            }
            var split = str.Split(',');
            var result = new LXFMLDoc.Brick.Part.Material[split.Length];

            for (var i = 0; i < split.Length; ++i)
            {
                var components = split[i].Split(':');
                var material = new LXFMLDoc.Brick.Part.Material { colorId = Convert.ToInt32(components[0]), shaderId = Convert.ToInt32(components[1]) };
                result[i] = material;
            }

            return result;
        }

        /// <summary>
        /// Reads out image ids and surface names from decoration list. 
        /// </summary>
        /// <param name="str">Decoration string</param>
        /// <returns>Returns an array of LXFML decorations</returns>
        public static LXFMLDoc.Brick.Part.Decoration[] StringOfDecorationToDecorationArray(string str)
        {
            if (string.IsNullOrEmpty(str))
            {
                return new LXFMLDoc.Brick.Part.Decoration[] { };
            }
            var split = str.Split(',');
            var result = new LXFMLDoc.Brick.Part.Decoration[split.Length];

            for (var i = 0; i < split.Length; ++i)
            {
                var components = split[i].Split(':');
                var decoration = new LXFMLDoc.Brick.Part.Decoration { imageId = components[0], surfaceName = components[1] };
                result[i] = decoration;
            }

            return result;
        }

        /// <summary>
        /// Convert a comma separated string to an array of ints
        /// </summary>
        /// <param name="str">The comma separated string</param>
        /// <returns>Returns the parsed array of ints</returns>
        public static int[] StringToIntArray(string str)
        {
            if (string.IsNullOrEmpty(str))
            {
                return new int[] { };
            }
            var split = str.Split(',');
            var result = new int[split.Length];

            for (var i = 0; i < split.Length; ++i) result[i] = Convert.ToInt32(split[i]);

            return result;
        }

        /// <summary>
        /// Convert a comma separated string to an array of floats
        /// </summary>
        /// <param name="str">The comma separated string</param>
        /// <returns>Returns the parsed array of floats</returns>
        public static float[] StringToFloatArray(string str)
        {
            var split = str.Split(',');
            var result = new float[split.Length];

            for (var i = 0; i < split.Length; ++i) result[i] = Convert.ToSingle(split[i], System.Globalization.CultureInfo.InvariantCulture);

            return result;
        }
    }

}