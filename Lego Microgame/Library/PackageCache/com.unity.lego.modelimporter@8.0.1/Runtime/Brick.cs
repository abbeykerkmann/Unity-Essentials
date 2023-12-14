// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.Collections.Generic;
using UnityEngine;
using System.Linq;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents a LEGO brick
    /// </summary>
    /// <remarks>
    /// A brick really represents a collection of parts, which is the actual physical part of a brick
    /// </remarks>
#if UNITY_EDITOR
    [ExecuteAlways]
#endif
    [SelectionBase]
    public class Brick : MonoBehaviour
    {
        /// <summary>
        /// The brick design ID
        /// </summary>
        public int designID;

        /// <summary>
        /// A uuid that is set on import uniquely identifying the brick
        /// </summary>
        /// <remarks>
        /// This might not be present if it was not set on import
        /// </remarks>
        public string uuid;

        /// <summary>
        /// The list of parts this brick consists of
        /// </summary>
        public List<Part> parts = new List<Part>();

        /// <summary>
        /// The bounds of a brick in its local space
        /// </summary>
        public Bounds totalBounds = new Bounds();

        /// <summary>
        /// Whether or not the brick is currently colliding
        /// </summary>
        public bool colliding;

        /// <summary>
        /// Event that is raised when this brick is enabled
        /// </summary>
        public static event System.Action<Brick> onEnable;

        /// <summary>
        /// Event that is raised when the parent of this brick changes
        /// </summary>
        public static event System.Action<Brick> onParentChange;
#if UNITY_EDITOR

        /// <summary>
        /// Event that is raised when this brick is destroyed
        /// </summary>
        public static event System.Action<Brick> onDestroy;        
        private static Material transparentMaterial;

        /// <summary>
        /// Set the material based on whether or not this brick is currently ghosted
        /// </summary>
        /// <param name="ghosted">Whether or not the brick is ghosted</param>
        /// <param name="recordUndo">Whether or not to record undo</param>
        public void SetGhosted(bool ghosted, bool recordUndo = true)
        {
            if(ghosted && transparentMaterial == null)
            {
                transparentMaterial = AssetDatabase.LoadAssetAtPath<Material>("Packages/com.unity.lego.modelimporter/Materials/LEGO_GhostedBrick.mat");;
            }

            foreach(var part in parts)
            {
                if(part.transform.childCount > 0)
                {
                    var colourChangeSurfaces = part.transform.Find("ColourChangeSurfaces");
                    Material material = ghosted ? transparentMaterial : Part.GetMaterial(part.materialIDs[0]);
                    if(!material)
                    {
                        continue;
                    }

                    var renderersToEdit = new List<MeshRenderer>();
                    var colourSurfaceRenderersToEdit = new List<(MeshRenderer, int)>();

                    var shell = part.transform.Find("Shell");
                    if(shell)
                    {
                        var mr = shell.GetComponent<MeshRenderer>();
                        renderersToEdit.Add(mr);
                    }

                    foreach(var knob in part.knobs)
                    {
                        var mr = knob.GetComponent<MeshRenderer>();
                        renderersToEdit.Add(mr);
                    }

                    foreach(var tube in part.tubes)
                    {
                        var mr = tube.GetComponent<MeshRenderer>();
                        renderersToEdit.Add(mr);                            
                    }

                    if(part.materialIDs.Count > 1 && colourChangeSurfaces)
                    {
                        for(var i = 1; i < part.materialIDs.Count; i++)
                        {
                            var surface = colourChangeSurfaces.GetChild(i - 1);
                            if(surface)
                            {
                                var mr = surface.GetComponent<MeshRenderer>();
                                colourSurfaceRenderersToEdit.Add((mr, part.materialIDs[i]));
                            }
                        }
                    }

                    if(recordUndo)
                    {
                        Undo.RegisterCompleteObjectUndo(renderersToEdit.ToArray(), "Updating brick material.");
                        Undo.RegisterCompleteObjectUndo(colourSurfaceRenderersToEdit.Select(x => x.Item1).ToArray(), "Update brick material");
                    }

                    foreach(var renderer in renderersToEdit)
                    {
                        renderer.sharedMaterial = material;
                    }

                    foreach(var (cs, id) in colourSurfaceRenderersToEdit)
                    {
                        if (ghosted)
                        {
                            cs.sharedMaterial = material;
                        }
                        else
                        {
                            cs.sharedMaterial = Part.GetMaterial(id);
                        }
                    }
                }
            }
        }

        /// <summary>
        /// Update the colliding state of this brick
        /// </summary>
        /// <param name="isColliding">The new colliding state</param>
        /// <param name="updateMaterial">Whether or not to update the material</param>
        /// <param name="recordUndo">Whether or not to record undo</param>
        public void UpdateColliding(bool isColliding, bool updateMaterial = true, bool recordUndo = true)
        {
            bool changed = colliding != isColliding;
            if (recordUndo && changed)
            {
                Undo.RegisterCompleteObjectUndo(this, "Changing collision status.");
            }

            colliding = isColliding;

            if (updateMaterial && changed)
            {
                SetGhosted(colliding, recordUndo);
            }
            Connection.RegisterPrefabChanges(this);
        }

        /// <summary>
        /// Check whether or not this brick is currently colliding
        /// </summary>
        /// <param name="hits">Out parameter for the amount of hits</param>
        /// <param name="ignoredBricks">Optional parameter for bricks to ignore on collision</param>
        /// <param name="earlyOut">Whether or not to early out when finding a collision</param>
        /// <returns>Returns <see langword="true"/> if the brick is colliding, <see langword="false"/> otherwise</returns>
        public bool IsColliding(out int hits, HashSet<Brick> ignoredBricks = null, bool earlyOut = true)
        {
            foreach(var part in parts)
            {
                if(Part.IsColliding(part, part.transform.localToWorldMatrix, BrickBuildingUtility.ColliderBuffer, out hits, ignoredBricks, earlyOut))
                {
                    return true;
                }
            }
            hits = 0;
            return false;
        }
#endif

        void OnEnable()
        {
            onEnable?.Invoke(this);
        }

        void OnTransformParentChanged()
        {
            onParentChange?.Invoke(this);
        }

        /// <summary>
        /// Get bricks connected to this brick
        /// </summary>
        /// <param name="recursive">Whether or not to do a recursive search</param>
        /// <returns>Returns the set of connected bricks</returns>
        public HashSet<Brick> GetConnectedBricks(bool recursive = true)
        {
            var connectedBricks = new HashSet<Brick>();
            GetConnectedBricks(this, connectedBricks, recursive);
            return connectedBricks;
        }

        /// <summary>
        /// Check whether or not this brick is a legacy brick
        /// </summary>
        /// <returns>Returns <see langword="true"/> if this brick is a legacy brick, <see langword="false"/> otherwise</returns>
        public bool IsLegacy()
        {
            for(int i = 0; i < parts.Count; i++)
            {
                if(parts[i].legacy)
                {
                    return true;
                }
            }
            return false;
        }

        /// <summary>
        /// Check whether or not this brick has connectivity
        /// </summary>
        /// <returns>Returns <see langword="true"/> if the brick has connectivity, <see langword="false"/> otherwise</returns>
        public bool HasConnectivity()
        {
            for(int i = 0; i < parts.Count; i++)
            {
                if(parts[i].connectivity)
                {
                    return true;
                }
            }
            return false;
        }

        /// <summary>
        /// Disconnect all fields and their connections on this brick
        /// </summary>
        public void DisconnectAll()
        {
            foreach (var part in parts)
            {
                part.DisconnectAll();                
            }
        }

        /// <summary>
        /// Disconnect all invalid connections for this brick.
        /// </summary>
        /// <remarks>
        /// Invalid connections are usually connections that are wrongly aligned which were previously not
        /// </remarks>
        public void DisconnectAllInvalid()
        {
            foreach (var part in parts)
            {
                part.DisconnectAllInvalid();  
            }
        }

        /// <summary>
        /// Disconnect from all connections not connected to a list of bricks.
        /// </summary>
        /// <remarks>
        /// Used to certain cases where you may want to keep connections with a selection of bricks.
        /// </remarks>
        /// <param name="bricksToKeep">List of bricks to keep connections to</param>
        public void DisconnectInverse(ICollection<Brick> bricksToKeep)
        {
            foreach (var part in parts)
            {
                part.DisconnectInverse(bricksToKeep);
            }
        }

        private void GetConnectedBricks(Brick brick, HashSet<Brick> result, bool recursive)
        {
            foreach (var part in brick.parts)
            {
                if (part.connectivity)
                {
                    foreach(var field in part.connectivity)
                    {
                        if(field is PlanarField pf)
                        {
                            var connected = pf.GetConnectedConnections();
                            foreach (var connection in connected)
                            {
                                var connectedTo = pf.GetConnection(connection);
                                if (connectedTo == null)
                                {
                                    continue;
                                }
                                var connectedBrick = connectedTo.field.connectivity.part.brick;
                                if (connectedBrick && !result.Contains(connectedBrick))
                                {
                                    result.Add(connectedBrick);
                                    if (recursive)
                                    {
                                        GetConnectedBricks(connectedBrick, result, recursive);
                                    }
                                }
                            }
                        }
                        else if(field is AxleField af)
                        {
                            foreach (var connectedTo in af.connectedTo)
                            {
                                var connectedBrick = connectedTo.field.connectivity.part.brick;
                                if (connectedBrick && !result.Contains(connectedBrick))
                                {
                                    result.Add(connectedBrick);
                                    if (recursive)
                                    {
                                        GetConnectedBricks(connectedBrick, result, recursive);
                                    }
                                }
                            }
                        }
                        else if(field is FixedField ff)
                        {
                            if(ff.connectedField)
                            {
                                var connectedBrick = ff.connectedField.connectivity.part.brick;
                                if(connectedBrick && !result.Contains(connectedBrick))
                                {
                                    result.Add(connectedBrick);
                                    if(recursive)
                                    {
                                        GetConnectedBricks(connectedBrick, result, recursive);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

#if UNITY_EDITOR
        void OnDestroy()
        {
            if(!EditorApplication.isPlaying && !EditorApplication.isPlayingOrWillChangePlaymode)
            {
                onDestroy?.Invoke(this);
            }
        }
#endif
    }
}