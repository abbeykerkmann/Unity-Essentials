// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents all connectivity on a part
    /// </summary>
    public class Connectivity : MonoBehaviour, IEnumerable<ConnectionField>
    {
        /// <summary>
        /// An iterator used for the result of a connection query
        /// </summary>
        [Serializable]
        public class ConnectionIterator : IEnumerable<(Connection, Connection)>
        {
            /// <summary>
            /// The planar connection pairs
            /// </summary>
            [HideInInspector] public List<(PlanarFeature, PlanarFeature)> planarFeatures = new List<(PlanarFeature, PlanarFeature)>();
            /// <summary>
            /// The axle connection pairs
            /// </summary>
            [HideInInspector] public List<(AxleFeature, AxleFeature)> axleFeatures = new List<(AxleFeature, AxleFeature)>();
            /// <summary>
            /// The fixed connection pairs
            /// </summary>
            [HideInInspector] public List<(FixedFeature, FixedFeature)> fixedFeatures = new List<(FixedFeature, FixedFeature)>();

            /// <summary>
            /// Constructs a ConnectionIterator with lists of connection pairs
            /// </summary>
            /// <param name="planarConnections">The planar connection pairs</param>
            /// <param name="axleConnections">The axle connection pairs</param>
            /// <param name="fixedConnections">The fixed connection pairs</param>
            public ConnectionIterator(List<(PlanarFeature, PlanarFeature)> planarConnections, List<(AxleFeature, AxleFeature)> axleConnections, List<(FixedFeature, FixedFeature)> fixedConnections)
            {
                planarFeatures = planarConnections;
                axleFeatures = axleConnections;
                fixedFeatures = fixedConnections;
            }

            /// <inheritdoc/>
            public IEnumerator<(Connection, Connection)> GetEnumerator()
            {
                foreach (var feature in planarFeatures)
                {
                    yield return feature;
                }

                foreach (var feature in axleFeatures)
                {
                    yield return feature;
                }

                foreach (var feature in fixedFeatures)
                {
                    yield return feature;
                }
            }

            /// <inheritdoc/>
            IEnumerator IEnumerable.GetEnumerator()
            {
                return GetEnumerator();
            }
        }

        /// <summary>
        /// The asset version of this asset
        /// </summary>
        public int version = 0;

        /// <summary>
        /// The part that this connectivity belongs to
        /// </summary>
        public Part part;

        /// <summary>
        /// The extents of the part as gathered from the source data
        /// </summary>
        public Bounds extents;

        /// <summary>
        /// List of planar fields that this connectivity contains
        /// </summary>
        [HideInInspector] public List<PlanarField> planarFields = new List<PlanarField>();
        /// <summary>
        /// List of axle fields that this connectivity contains
        /// </summary>
        [HideInInspector] public List<AxleField> axleFields = new List<AxleField>();
        /// <summary>
        /// List of fixed fields that this connectivity contains
        /// </summary>
        [HideInInspector] public List<FixedField> fixedFields = new List<FixedField>();

        /// <summary>
        /// Disconnect all invalid connections
        /// </summary>
        /// <remarks>
        /// Invalid connections can be several things depending on the field type.
        /// Usually it is related to collision or unaligned connection fields that might previously have been aligned.
        /// </remarks>
        /// <returns>Returns the disconnected fields</returns>
        public HashSet<ConnectionField> DisconnectAllInvalid()
        {
            var result = new HashSet<ConnectionField>();

            foreach(var field in this)
            {
                result.UnionWith(field.DisconnectAllInvalid());
            }

            return result;
        }

        /// <summary>
        /// Disconnect everything from this connectivity object
        /// </summary>
        /// <returns>Return all the fields that were connected to this object</returns>
        public HashSet<ConnectionField> DisconnectAll()
        {
            var result = new HashSet<ConnectionField>();
            foreach (var field in this)
            {
                result.UnionWith(field.DisconnectAll());
            }

            return result;
        }

        /// <summary>
        /// Disconnect all bricks that are not in the provided list
        /// </summary>
        /// <param name="bricksToKeep">The bricks to keep connected</param>
        /// <returns>Returns the connection fields that were disconnected.</returns>
        public HashSet<ConnectionField> DisconnectInverse(ICollection<Brick> bricksToKeep)
        {
            var result = new HashSet<ConnectionField>();

            foreach (var field in this)
            {
                result.UnionWith(field.DisconnectInverse(bricksToKeep));
            }

            return result;
        }

        /// <inheritdoc/>
        public IEnumerator<ConnectionField> GetEnumerator()
        {
            foreach (var field in planarFields)
            {
                yield return field;
            }

            foreach (var field in axleFields)
            {
                yield return field;
            }

            foreach (var field in fixedFields)
            {
                yield return field;
            }
        }

        /// <inheritdoc/>
        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        /// <summary>
        /// Query the possible connections for a field
        /// </summary>
        /// <param name="field">The field to query connections on</param>
        /// <param name="reject">Out parameter that signifies the type of match (ignore, reject or connect)</param>
        /// <param name="onlyConnectTo">An optional set of bricks if you only want connections to specific bricks</param>
        /// <param name="bothkinds">Optional boolean to specify whether we want to check for both connection field kinds (see <see cref="ConnectionField.FieldKind"/></param>
        /// <returns>Returns a set of tuples of possible connections</returns>
        public static HashSet<(Connection, Connection)> QueryConnections(ConnectionField field, out bool reject, HashSet<Brick> onlyConnectTo, bool bothkinds = false)
        {
            HashSet<ConnectionField> onlyConnectToFields = null;
            if(onlyConnectTo != null && onlyConnectTo.Count > 0)
            {
                onlyConnectToFields = new HashSet<ConnectionField>();
                foreach(var brick in onlyConnectTo)
                {
                    foreach(var part in brick.parts)
                    {
                        if(!part.connectivity)
                        {
                            continue;
                        }

                        if (field is PlanarField)
                        {
                            onlyConnectToFields.UnionWith(part.connectivity.planarFields);
                        }
                        else if (field is AxleField)
                        {
                            onlyConnectToFields.UnionWith(part.connectivity.axleFields);
                        }
                        else if(field is FixedField)
                        {
                            onlyConnectToFields.UnionWith(part.connectivity.fixedFields);
                        }
                    }
                }
            }
            return field.QueryConnections(out reject, bothkinds, onlyConnectToFields);
        }

        /// <summary>
        /// Query all fields in this connectivity object for possible connections
        /// </summary>
        /// <param name="reject">Out parameter that tells us whether a connection at the current position should be rejected.</param>
        /// <param name="onlyConnectTo">Optional filter parameter for restricting which bricks we want to connecto.</param>
        /// <returns>Returns a <see cref="ConnectionIterator"/> containing all possible connection pairs</returns>
        public ConnectionIterator QueryConnections(out bool reject, ICollection<Brick> onlyConnectTo = null)
        {
            HashSet<ConnectionField> onlyConnectToFields = null;
            if(onlyConnectTo != null && onlyConnectTo.Count > 0)
            {
                onlyConnectToFields = new HashSet<ConnectionField>();
                foreach(var brick in onlyConnectTo)
                {
                    foreach(var part in brick.parts)
                    {
                        if(!part.connectivity)
                        {
                            continue;
                        }
                        onlyConnectToFields.UnionWith(part.connectivity);
                    }
                }
            }
            return QueryConnections(out reject, false, onlyConnectToFields);
        }

        /// <summary>
        /// Query all fields in this connectivity object for possible connections
        /// </summary>
        /// <param name="reject">Out parameter that tells us whether a connection at the current position should be rejected.</param>
        /// <param name="bothKinds">Determines whether we want to query for opposite kind fields.</param>
        /// <param name="onlyConnectTo">Optional filter parameter for restricting which bricks we want to connect to.</param>
        /// <returns>Returns a <see cref="ConnectionIterator"/> containing all possible connection pairs</returns>
        public ConnectionIterator QueryConnections(out bool reject, bool bothKinds, ICollection<ConnectionField> onlyConnectTo = null)
        {
            List<(PlanarFeature, PlanarFeature)> planarToBeConnected = new List<(PlanarFeature, PlanarFeature)>();
            List<(AxleFeature, AxleFeature)> axlesToBeConnected = new List<(AxleFeature, AxleFeature)>();
            List<(FixedFeature, FixedFeature)> fixedToBeConnected = new List<(FixedFeature, FixedFeature)>();

            foreach (var field in this)
            {
                // Make a new query for all nearby connections                
                var connections = field.QueryConnections(out reject, bothKinds, onlyConnectTo);
                if (reject)
                {
                    return new ConnectionIterator(planarToBeConnected, axlesToBeConnected, fixedToBeConnected);
                }

                foreach (var connection in connections)
                {
                    if(connection.Item1 is PlanarFeature p1 && connection.Item2 is PlanarFeature p2)
                    {
                        planarToBeConnected.Add((p1, p2));
                    }
                    else if (connection.Item1 is AxleFeature a1 && connection.Item2 is AxleFeature a2)
                    {
                        axlesToBeConnected.Add((a1, a2));
                    }
                    else if(connection.Item1 is FixedFeature f1 && connection.Item2 is FixedFeature f2)
                    {
                        fixedToBeConnected.Add((f1, f2));
                    }
                }
            }

            reject = false;
            return new ConnectionIterator(planarToBeConnected, axlesToBeConnected, fixedToBeConnected);
        }
    }
}