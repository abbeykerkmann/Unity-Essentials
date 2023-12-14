// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using Object = UnityEngine.Object;
using LEGOMaterials;

namespace LEGOModelImporter
{
    /// <summary>
    /// Provides functions for instantiating parts and bricks
    /// </summary>
    public class PartImporter
    {
        /// <summary>
        /// Raised when a part import has been started
        /// </summary>
        public static event Action partImportStarted;

        /// <summary>
        /// Raised when a part import has ended
        /// </summary>
        public static event Action partImportEnded;

        /// <summary>
        /// Instantiate game objects for a specified brick
        /// </summary>
        /// <param name="designId">The design id of the part</param>
        /// <param name="colourId">The colour id of the part</param>
        /// <param name="importSettings">Import settings to use</param>
        /// <returns>Returns the instantiated brick</returns>
        public static Brick InstantiateBrick(string designId, int colourId, ModelGroupImportSettings importSettings)
        {
            partImportStarted?.Invoke();
            // Determine whether or not to be static and to generate light map UVs.
            var brickStatic = importSettings.isStatic;
            var brickLightmapped = brickStatic && importSettings.lightmapped;
            var brickLod = importSettings.lod;

            var brickGO = new GameObject(designId, typeof(Brick));
            var brickComp = brickGO.GetComponent<Brick>();

            GameObject partToInstantiate = null;

            var partExistenceResult = PartUtility.UnpackPart(designId, brickLightmapped, brickLod);

            string remappedDesignID = partExistenceResult.designID;
            if (partExistenceResult.existence != PartUtility.PartExistence.None)
            {
                // FIXME Make a note of changed design ids.
                partToInstantiate = PartUtility.LoadPart(remappedDesignID, brickLightmapped, partExistenceResult.existence == PartUtility.PartExistence.Legacy, brickLod);
            }

            bool isLegacy = partExistenceResult.existence == PartUtility.PartExistence.Legacy;

            if (!partToInstantiate)
            {
                Debug.LogError("Missing part FBX -> " + remappedDesignID);
                return null;
            }

            var partGO = Object.Instantiate(partToInstantiate);
            partGO.name = partToInstantiate.name;

            // Assign legacy, material IDs and set up references.
            var partComp = partGO.AddComponent<Part>();
            partComp.designID = Convert.ToInt32(remappedDesignID);
            partComp.legacy = isLegacy;

            var materialCount = 1;
            var colourChangeSurfaces = partComp.transform.Find("ColourChangeSurfaces");
            if (colourChangeSurfaces)
            {
                materialCount += colourChangeSurfaces.childCount;
            }
            var materials = new LXFMLDoc.Brick.Part.Material[materialCount];
            for(var i = 0; i < materialCount; ++i)
            {
                var material = new LXFMLDoc.Brick.Part.Material() { colorId = colourId, shaderId = 0 };
                materials[i] = material;
                partComp.materialIDs.Add(material.colorId);
            }

            partComp.brick = brickComp;
            brickComp.parts.Add(partComp);

            if (!isLegacy)
            {
                // Instantiate and setup knobs and tubes.
                // FIXME Handle normal mapped model.
                CommonPartImporter.InstantiateKnobsAndTubes(partComp, brickLightmapped, brickLod);
            }

            // Create collider and connectivity information.
            var brickColliders = importSettings.colliders;
            var brickConnectivity = brickColliders && importSettings.connectivity;

            if (brickColliders)
            {
                var collidersAvailable = PartUtility.UnpackCollidersForPart(remappedDesignID);
                GameObject collidersToInstantiate = null;
                if (collidersAvailable)
                {
                    collidersToInstantiate = PartUtility.LoadCollidersPrefab(remappedDesignID);
                }

                if (!collidersToInstantiate && !isLegacy)
                {
                    Debug.LogError("Missing part collider information -> " + remappedDesignID);
                }

                if (collidersToInstantiate)
                {
                    var collidersGO = Object.Instantiate(collidersToInstantiate);
                    collidersGO.name = "Colliders";
                    collidersGO.transform.SetParent(partGO.transform, false);
                    var colliderComp = collidersGO.GetComponent<Colliders>();
                    partComp.colliders = colliderComp;
                    colliderComp.part = partComp;
                }
            }

            if (brickConnectivity)
            {
                GameObject connectivityToInstantiate = null;
                var connectivityAvailable = PartUtility.UnpackConnectivityForPart(remappedDesignID);
                if (connectivityAvailable)
                {
                    connectivityToInstantiate = PartUtility.LoadConnectivityPrefab(remappedDesignID);
                }

                if (!connectivityToInstantiate && !isLegacy)
                {
                    Debug.LogError("Missing part connectivity information -> " + remappedDesignID);
                }

                if (connectivityToInstantiate)
                {
                    var connectivityGO = Object.Instantiate(connectivityToInstantiate);
                    connectivityGO.name = "Connectivity";
                    connectivityGO.transform.SetParent(partGO.transform, false);
                    var connectivityComp = connectivityGO.GetComponent<Connectivity>();
                    partComp.connectivity = connectivityComp;
                    connectivityComp.part = partComp;

                    foreach (var field in connectivityComp.planarFields)
                    {
                        foreach (var connection in field.connections)
                        {
                            MatchConnectionWithKnob(connection, partComp.knobs);
                            MatchConnectionWithTubes(connection, partComp.tubes);
                        }
                    }
                }
            }

            SetMaterials(partComp, materials, isLegacy);
            // TODO Add decoration support.
            SetDecorations(partComp, null, isLegacy);

            ModelImporter.SetStaticAndGIParams(partGO, brickStatic, brickLightmapped, true);

            brickGO.transform.position = partGO.transform.position;
            brickGO.transform.rotation = partGO.transform.rotation;
            brickGO.transform.localScale = Vector3.one;
            partGO.transform.SetParent(brickGO.transform, true);

            // If all parts were missing, discard brick.
            if (brickGO.transform.childCount == 0)
            {
                Object.DestroyImmediate(brickGO);
                return null;
            }

            // Add LEGOBrickAsset component.
            brickGO.AddComponent<LEGOBrickAsset>();

            Undo.RegisterCreatedObjectUndo(brickGO, "Creating part");

            ModelImporter.SetStaticAndGIParams(brickGO, brickStatic, brickLightmapped);

            // Assign uuid
            brickComp.designID = Convert.ToInt32(designId);
            brickComp.uuid = Guid.NewGuid().ToString();

            var oldBrickPos = brickGO.transform.position;
            var oldBrickRot = brickGO.transform.rotation;

            brickGO.transform.position = Vector3.zero;
            brickGO.transform.rotation = Quaternion.identity;

            var bounds = ComputeBounds(brickGO.transform);
            var corners = BrickBuildingUtility.GetBoundingCorners(bounds, Matrix4x4.identity);

            BrickBuildingUtility.GetMinMax(corners, out Vector3 min, out Vector3 max);
            bounds.SetMinMax(min, max);

            brickGO.transform.position = oldBrickPos;
            brickGO.transform.rotation = oldBrickRot;

            brickComp.totalBounds = bounds;

            partImportEnded?.Invoke();

            return brickComp;
        }

        /// <summary>
        /// Match connections with a knob
        /// </summary>
        /// <param name="connection">The connection</param>
        /// <param name="knobs">A list of knobs</param>
        public static void MatchConnectionWithKnob(PlanarFeature connection, List<Knob> knobs)
        {
            var POS_EPSILON = 0.01f;
            var ROT_EPSILON = 0.01f;
            var position = connection.GetPosition();
            foreach (var knob in knobs)
            {
                if (Vector3.Distance(position, knob.transform.position) < POS_EPSILON && 1.0f - Vector3.Dot(connection.field.transform.up, knob.transform.up) < ROT_EPSILON)
                {
                    connection.knob = knob;
                    knob.connectionIndex = connection.index;
                    knob.field = connection.field as PlanarField;
                    return;
                }
            }
        }

        /// <summary>
        /// Match connections with tubes
        /// </summary>
        /// <param name="connection">The connection</param>
        /// <param name="tubes">A list of tubes</param>
        public static void MatchConnectionWithTubes(PlanarFeature connection, List<Tube> tubes)
        {
            // FIXME Temporary fix to tube removal while we work on connections that are related/non-rejecting but not connected.
            if (connection.IsRelevantForTube())
            {
                var position = connection.GetPosition();
                var DIST_EPSILON = 0.01f * 0.01f;
                var ROT_EPSILON = 0.01f;
                foreach (var tube in tubes)
                {
                    var meshFilter = tube.GetComponent<MeshFilter>();
                    if(!meshFilter || !meshFilter.sharedMesh)
                    {
                        continue;
                    }

                    var bounds = meshFilter.sharedMesh.bounds;
                    var extents = bounds.extents;
                    extents.x += 0.4f;
                    extents.z += 0.4f;
                    bounds.extents = extents;
                    var localConnectionPosition = tube.transform.InverseTransformPoint(position);

                    if (bounds.SqrDistance(localConnectionPosition) < DIST_EPSILON && 1.0f - Vector3.Dot(connection.field.transform.up, tube.transform.up) < ROT_EPSILON)
                    {
                        connection.tubes.Add(tube);
                        tube.connections.Add(connection.index);
                        tube.field = connection.field as PlanarField;
                    }

                    if (connection.tubes.Count == 4)
                    {
                        return;
                    }
                }
            }
        }

        private static Bounds ComputeBounds(Transform root)
        {
            var meshRenderers = root.GetComponentsInChildren<MeshRenderer>();
            if (meshRenderers.Length > 0)
            {
                var bounds = meshRenderers[0].bounds;
                foreach (var renderer in meshRenderers)
                {
                    bounds.Encapsulate(renderer.bounds);
                }                
                return bounds;
            }
            return new Bounds(root.position, Vector3.zero);
        }

        private static Material LoadMaterial(int colourID)
        {
            Material material = null;
            var materialExistence = MaterialUtility.CheckIfMaterialExists(colourID);
            if (materialExistence != MaterialUtility.MaterialExistence.None)
            {
                material = MaterialUtility.LoadMaterial(colourID, materialExistence == MaterialUtility.MaterialExistence.Legacy);
            }

            if (materialExistence == MaterialUtility.MaterialExistence.Legacy)
            {
                Debug.LogWarning("Legacy material " + colourID);
            }

            if (!material)
            {
                Debug.LogError("Missing material " + colourID);
            }

            return material;
        }

        /// <summary>
        /// Applies materials to imported parts.
        /// </summary>
        /// <remarks>
        /// Ignores shader id of material.
        /// </remarks>
        /// <param name="part">The part tos et materials on</param>
        /// <param name="materials">The materials to set on the part</param>
        /// <param name="isLegacyPart">Whether or not the part is legacy</param>
        public static void SetMaterials(Part part, LXFMLDoc.Brick.Part.Material[] materials, bool isLegacyPart)
        {
            if (materials.Length > 0)
            {
                if (isLegacyPart)
                {
                    int colourID = materials[0].colorId;

                    Material material = LoadMaterial(colourID);
                    var mr = part.GetComponent<MeshRenderer>();
                    mr.sharedMaterial = material;
                }
                else
                {
                    if (part.transform.childCount > 0)
                    {
                        var colourChangeSurfaces = part.transform.Find("ColourChangeSurfaces");

                        // Assign materials to shell, knobs, tubes and colour change surfaces
                        for (var i = 0; i < materials.Length; ++i)
                        {
                            int colourID = materials[i].colorId;
                            Material material = LoadMaterial(colourID);

                            if (i == 0)
                            {
                                // Shell.
                                var shell = part.transform.Find("Shell");
                                if (shell)
                                {
                                    var mr = shell.GetComponent<MeshRenderer>();
                                    mr.sharedMaterial = material;
                                }
                                else
                                {
                                    Debug.LogError("Missing shell submesh on item " + part.name);
                                }

                                // Knobs.
                                foreach (var knob in part.knobs)
                                {
                                    var mr = knob.GetComponent<MeshRenderer>();
                                    mr.sharedMaterial = material;
                                }

                                // Tubes.
                                foreach (var tube in part.tubes)
                                {
                                    var mr = tube.GetComponent<MeshRenderer>();
                                    mr.sharedMaterial = material;
                                }
                            }
                            else
                            {
                                // Colour change surfaces.
                                if (colourChangeSurfaces)
                                {
                                    var surface = colourChangeSurfaces.GetChild(i - 1);
                                    if (surface)
                                    {
                                        var mr = surface.GetComponent<MeshRenderer>();
                                        mr.sharedMaterial = material;
                                    }
                                    else
                                    {
                                        Debug.LogError("Missing colour change surface " + (i - 1) + " on item " + part.name);
                                    }
                                }
                                else
                                {
                                    Debug.LogError("Missing colour change surface group on multi material item " + part.name);
                                }
                            }
                        }

                        // Check if all colour change surfaces have been assigned a material.
                        if (colourChangeSurfaces)
                        {
                            if (materials.Length - 1 < colourChangeSurfaces.childCount)
                            {
                                Debug.LogError("Missing material for colour change surface(s) on item " + part.name);

                                int colourID = materials[materials.Length - 1].colorId;
                                Material material = LoadMaterial(colourID);

                                for (var i = materials.Length - 1; i < colourChangeSurfaces.childCount; ++i)
                                {
                                    var surface = colourChangeSurfaces.GetChild(i);
                                    if (surface)
                                    {
                                        var mr = surface.GetComponent<MeshRenderer>();
                                        mr.sharedMaterial = material;
                                    }
                                    else
                                    {
                                        Debug.LogError("Missing colour change surface " + i + " on item " + part.name);
                                    }
                                }
                            }
                        }
                    }
                }

            }
        }

        /// <summary>
        /// Sets decorations on imported objects. Not modified.
        /// </summary>
        /// <param name="part">The part to set decorations on</param>
        /// <param name="decorations">The decorations to set on the part</param>
        /// <param name="isLegacy">Whether or not the part is legacy</param>
        public static void SetDecorations(Part part, LXFMLDoc.Brick.Part.Decoration[] decorations, bool isLegacy)
        {
            if (isLegacy)
            {
            }
            else
            {
                // Disable decoration surfaces.
                var decorationSurfaces = part.transform.Find("DecorationSurfaces");
                if (decorationSurfaces)
                {
                    decorationSurfaces.gameObject.SetActive(false);
                }
            }
            /*
            for (var i = 0; i < obj.transform.childCount; ++i)
            {
                var t = obj.transform.GetChild(i);

                if (t.gameObject.name.StartsWith("Decoration_"))
                {
                    if (decorations != null && i < decorations.Length && decorations[i] != 0)
                    {
                        if (!mats.ContainsKey(decorations[i]))
                        {
                            var t2d = Util.LoadObjectFromResources<Texture2D>("Decorations/" + decorations[i]);
                            if (t2d != null)
                            {
                                // Generate new material for our prefabs
                                t2d.wrapMode = TextureWrapMode.Clamp;
                                t2d.anisoLevel = 4;
                                var newDecoMat = new Material(decoCutoutMaterial);
                                newDecoMat.SetTexture("_MainTex", t2d);
                                AssetDatabase.CreateAsset(newDecoMat,
                                    decorationMaterialsPath + "/" + decorations[i] + ".mat");
                                mats.Add(decorations[i], newDecoMat);
                                t.gameObject.GetComponent<Renderer>().sharedMaterial = mats[decorations[i]];
                            }
                            else
                            {
                                Debug.Log("Missing decoration -> " + decorations[i]);
                            }
                        }
                        else
                        {
                            t.gameObject.GetComponent<Renderer>().sharedMaterial = mats[decorations[i]];
                        }
                    }
                    else
                    {
                        Object.DestroyImmediate(t.gameObject);
                    }
                }
            }
            */
        }
    }
}