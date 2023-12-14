// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.Collections.Generic;

#if UNITY_EDITOR
using UnityEditor;
#endif

using UnityEngine;

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents the common code between different connection field types.
    /// </summary>
    /// <remarks>
    /// Common parent for all field types.
    /// </remarks>
#if UNITY_EDITOR
    [ExecuteAlways]
#endif
    public abstract class ConnectionField : MonoBehaviour
    {
        /// <summary>
        /// The kind of field
        /// </summary>
        /// <remarks>
        /// Connectors only match with receptors and vice versa
        /// </remarks>
        public enum FieldKind
        {
            /// <summary>
            /// A connector type
            /// </summary>
            connector,

            /// <summary>
            /// A receptor type
            /// </summary>
            receptor
        }     

        /// <summary>
        /// The owning connectivity object
        /// </summary>
        [HideInInspector] public Connectivity connectivity;

        /// <summary>
        /// Whether or not this field is a connector or receptor
        /// </summary>
        public FieldKind kind;

        /// <summary>
        /// Get name of physics layer of the field kind
        /// </summary>
        /// <param name="kind">The kind to get the physics layer of</param>
        /// <returns>Returns the name of the layer for the kind</returns>
        public static string GetLayer(FieldKind kind)
        {
            return kind == FieldKind.connector ? BrickBuildingUtility.ConnectivityConnectorLayerName : BrickBuildingUtility.ConnectivityReceptorLayerName;
        }

        /// <summary>
        /// Get the layer mask of either the opposite kind or both combined
        /// </summary>
        /// <param name="kind">The kind used to determine opposite</param>
        /// <param name="bothKinds">Whether or not to return the mask of both kinds</param>
        /// <returns>Returns a layermask for either one or both field kinds</returns>
        public static LayerMask GetMask(FieldKind kind, bool bothKinds = false)
        {
            if (bothKinds)
            {
                return BrickBuildingUtility.ConnectivityMask;
            }
            else
            {
                var opposite = kind == FieldKind.connector ? FieldKind.receptor : FieldKind.connector;
                return opposite == FieldKind.connector ? BrickBuildingUtility.ConnectivityConnectorMask : BrickBuildingUtility.ConnectivityReceptorMask;
            }
        }

        /// <summary>
        /// Override this to implemented a query for the possible connections for this field
        /// </summary>
        /// <param name="reject">Out parameter that signifies whether or not this is a rejection</param>
        /// <param name="bothkinds">Optional boolean to specify whether we want to check for both connection field kinds</param>
        /// <param name="onlyConnectTo">An optional filter collection if you only want to check connections on specific fields</param>
        /// <returns>Returns a list of tuples for the possible connections</returns>
        public abstract HashSet<(Connection, Connection)> QueryConnections(out bool reject, bool bothkinds = false, ICollection<ConnectionField> onlyConnectTo = null);

        /// <summary>
        /// Override this to implement how to disconnect all connections for this field.
        /// </summary>
        /// <returns>The fields that were disconnected</returns>
        public abstract HashSet<ConnectionField> DisconnectAll();

        /// <summary>
        /// Override this to implement how to disconnect all invalid connections for this field.
        /// </summary>
        /// <returns>The fields that were disconnected</returns>
        public abstract HashSet<ConnectionField> DisconnectAllInvalid();

        /// <summary>
        /// Override this to implement how to disconnect from all connections not connected to a list of bricks.
        /// </summary>
        /// <remarks>
        /// Used to certain cases where you may want to keep connections with a selection of bricks.
        /// </remarks>
        /// <param name="bricksToKeep">List of bricks to keep connections to</param>
        /// <returns>Returns the fields that were disconnected</returns>
        public abstract HashSet<ConnectionField> DisconnectInverse(ICollection<Brick> bricksToKeep);                                  
    }
}