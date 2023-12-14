using System.IO;

namespace LEGOMaterials
{
    /// <summary>
    /// Provides methods for dealing with LEGO material paths
    /// </summary>
    public static class MaterialPathUtility
    {
        static string materialsPath = "Packages/com.unity.lego.materials/Materials";
        static string legacyDir = "Legacy";

        /// <summary>
        /// Retrieves the path of a material by its ID
        /// </summary>
        /// <param name="id">The colour Id</param>
        /// <param name="legacy">Whether or not the material is a legacy material</param>
        /// <returns>Returns the path of a material</returns>
        public static string GetPath(MouldingColour.Id id, bool legacy = false)
        {
            return Path.Combine(MaterialPathUtility.materialsPath, legacy ? legacyDir : "", (int)id + ".mat");
        }
    }    
}
