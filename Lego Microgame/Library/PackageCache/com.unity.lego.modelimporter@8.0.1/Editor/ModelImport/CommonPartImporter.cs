using System.Collections.Generic;
using UnityEngine;
using Object = UnityEngine.Object;
using System.Text.RegularExpressions;

namespace LEGOModelImporter
{
    /// <summary>
    /// Provide methods for importing common parts such as knobs and tubes
    /// </summary>
    internal class CommonPartImporter
    {
        /// <summary>
        /// Instantiates knobs and tubes for a part
        /// </summary>
        /// <param name="part">The part</param>
        /// <param name="lightmapped">Whether or not the common parts should be lightmapped</param>
        /// <param name="lod">The lod of the commond parts</param>
        public static void InstantiateKnobsAndTubes(Part part, bool lightmapped, int lod)
        {
            var knobs = part.transform.Find("Knobs_loc");
            if (knobs)
            {
                InstantiateCommonParts(part, part.knobs, knobs, lightmapped, lod);
                knobs.name = "Knobs";
            }

            var tubes = part.transform.Find("Tubes_loc");
            if (tubes)
            {
                InstantiateCommonParts(part, part.tubes, tubes, lightmapped, lod);
                tubes.name = "Tubes";
            }
        }

        /// <summary>
        /// Generic method for instantiating common parts
        /// </summary>
        /// <typeparam name="T">The type of the common part. Needs to inherit from <see cref="CommonPart"/></typeparam>
        /// <param name="part">The part to put the common parts into</param>
        /// <param name="commonPartsList">The list of common parts to put the common parts into when constructed</param>
        /// <param name="parent">The transform parent of the common parts</param>
        /// <param name="lightmapped">Whether or not common parts will be lightmapped</param>
        /// <param name="lod">The lod of the common parts</param>
        public static void InstantiateCommonParts<T>(Part part, List<T> commonPartsList, Transform parent, bool lightmapped, int lod) where T : CommonPart
        {
            int count = parent.childCount;
            // Instantiate common parts using locators.
            for (int i = 0; i < count; i++)
            {
                var commonPartLocation = parent.GetChild(i);
                var name = Regex.Split(commonPartLocation.name, "(_[0-9]+( 1)?)$");

                GameObject commonPartToInstantiate = null;

                var commonPartAvailable = PartUtility.UnpackCommonPart(name[0], lightmapped, lod);
                if (commonPartAvailable)
                {
                    commonPartToInstantiate = PartUtility.LoadCommonPart(name[0], lightmapped, lod);
                }

                if (commonPartToInstantiate == null)
                {
                    Debug.LogError("Missing Common Part -> " + name[0]);
                    continue;
                }

                var commonPartGO = Object.Instantiate(commonPartToInstantiate);
                commonPartGO.name = commonPartToInstantiate.name;

                var commonPartComponent = commonPartGO.AddComponent<T>();
                commonPartComponent.part = part;

                // Set position and rotation.
                commonPartGO.transform.position = commonPartLocation.position;
                commonPartGO.transform.rotation = commonPartLocation.rotation;

                commonPartGO.transform.SetParent(parent, true);

                commonPartsList.Add(commonPartComponent);
            }
            // Remove locators.
            for (int i = 0; i < count; i++)
            {
                Object.DestroyImmediate(parent.GetChild(0).gameObject);
            }
        }
    }
}
