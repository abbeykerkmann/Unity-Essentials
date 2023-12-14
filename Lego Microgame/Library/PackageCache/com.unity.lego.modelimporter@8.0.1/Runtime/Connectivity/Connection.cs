// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.Collections.Generic;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif
namespace LEGOModelImporter
{
    /// <summary>
    /// Represents the common code between different connection feature types.
    /// </summary>
    /// <remarks>
    /// Common parent for all feature types.
    /// </remarks>
    [Serializable]
    public abstract class Connection
    {
        /// <summary>
        /// Options for the different types of interactions two connection features can have
        /// </summary>
        public enum ConnectionInteraction
        {
            /// <summary>
            /// Impossible connection
            /// </summary>
            Reject,

            /// <summary>
            /// No interaction
            /// </summary>
            Ignore,

            /// <summary>
            /// Interactions that can hinge
            /// </summary>
            Hinge,

            /// <summary>
            /// No movement allowed in interaction
            /// </summary>
            Fixed,

            /// <summary>
            /// Degree of freedom in translation in one axis
            /// </summary>
            Prismatic,

            /// <summary>
            /// Degree of freedom in rotation in one axis
            /// </summary>
            Cylindrical
        }

        /// <summary>
        /// Check whether a connection interaction type is a connectable type
        /// </summary>
        /// <param name="interaction">The interaction type we want to check</param>
        /// <returns>Returns <see langword="true"/> if the interaction is a connectable type, <see langword="false"/> otherwise</returns>
        public static bool IsConnectable(ConnectionInteraction interaction)
        {
            switch(interaction)
            {
                case ConnectionInteraction.Hinge:
                case ConnectionInteraction.Fixed:
                case ConnectionInteraction.Prismatic:
                case ConnectionInteraction.Cylindrical:
                return true;
                case ConnectionInteraction.Reject:
                case ConnectionInteraction.Ignore:
                return false;
            }
            return false;
        }

        /// <summary>
        /// The connection field this connection is owned by
        /// </summary>
        /// <remarks>
        /// All connections relate to a field. Some fields have multiple features and some only have one.
        /// </remarks>
        public ConnectionField field;

        /// <summary>
        /// Override this method to specify how two connections match
        /// </summary>
        /// <param name="rhs">The right hand side connection to check agains</param>
        /// <returns>Returns <see langword="true"/> if the connections match, <see langword="false"/> otherwise</returns>
        public abstract ConnectionInteraction MatchTypes(Connection rhs);

        /// <summary>
        /// Checks whether a connection is valid
        /// </summary>
        /// <remarks>
        /// You need to place the bricks at the right position yourself.
        /// This function only checks whether or not given the position the bricks are in, if a connection is valid.
        /// </remarks>
        /// <param name="dst">The connection to connect to</param>
        /// <param name="ignoredBricks">Optional set of bricks to ignore in collision check</param>
        /// <returns>Returns <see langword="true"/> if the connection is valid, <see langword="false"/> otherwise</returns>
        public bool IsConnectionValid(Connection dst, HashSet<Brick> ignoredBricks = null)
        {
            // Make sure types match
            var match = MatchTypes(dst);
            if(match == ConnectionInteraction.Reject)
            {
                return false;
            }

            // Prevent connecting to itself
            if (this == dst)
            {
                return false;
            }        

            var part = field.connectivity.part;
            var brick = part.brick;

            var dstField = dst.field;
            var otherPart = dstField.connectivity.part;

            //FIXME: Can parts connect to themselves?
            if (otherPart == part)
            {
                return false;
            }

            if(brick.colliding || otherPart.brick.colliding)
            {
                return false;
            }

            // Check if we collide with anything
            var parts = brick.parts;
            foreach (var p in parts)
            {
                if (Part.IsColliding(p, brick.transform.localToWorldMatrix, BrickBuildingUtility.ColliderBuffer, out _, ignoredBricks))
                {
                    return false;
                }
            }
            return true;
        }

        /// <summary>
        /// Register prefab changes on an object
        /// </summary>
        /// <param name="changedObject">The changed object</param>
        public static void RegisterPrefabChanges(UnityEngine.Object changedObject)
        {
#if UNITY_EDITOR
            if(PrefabUtility.IsPartOfPrefabInstance(changedObject))
            {                
                PrefabUtility.RecordPrefabInstancePropertyModifications(changedObject);
            }
#endif
        }
    }
}