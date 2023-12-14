// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System;
using UnityEngine;

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents a LEGO fixed feature.
    /// </summary>
    /// <remarks>
    /// Fixed features are features that don't have any degrees of freedom on connection.
    /// This could be something like a window within a frame that doesn't open (This would be a hinge).
    /// It could also be a tire on a wheel.
    /// Fixed connections always result in <see cref="Connection.ConnectionInteraction.Fixed"/> interactions.
    /// </remarks>
    [Serializable]
    public class FixedFeature : Connection
    {
        /// <summary>
        /// Options of axes that determine how two fixed features have to match
        /// </summary>
        public enum AxisType
        {
            /// <summary>
            /// Only the y-axis has to match between features
            /// </summary>
            Mono,

            /// <summary>
            /// Both the y- and x-axis have to match between features
            /// </summary>
            Dual
        }

        /// <summary>
        /// The type id of the fixed feature.
        /// </summary>
        /// <remarks>
        /// Fixed features only match on specific type id's whereas other feature types might connect to multiple different ids
        /// </remarks>
        public int typeId;

        /// <summary>
        /// The axis type this feature has
        /// </summary>
        public AxisType axisType;

        /// <summary>
        /// The owning field as a fixed field
        /// </summary>
        public FixedField Field { get { return field as FixedField; } }

        /// <inheritdoc/>
        public override ConnectionInteraction MatchTypes(Connection rhs)
        {
            if (rhs is FixedFeature f)
            {
                if (typeId == f.typeId)
                {
                    return ConnectionInteraction.Fixed;
                }
                else
                {
                    return ConnectionInteraction.Reject;
                }
            }
            return ConnectionInteraction.Ignore;
        }

        /// <summary>
        /// Check whether connecting to a feature would be valid
        /// </summary>
        /// <param name="rhs">The feature we are checking</param>
        /// <param name="interaction">The resulting interaction</param>
        /// <returns>Whether this connection would be valid at this transformation</returns>
        public bool CheckConnectionTransformationValid(FixedFeature rhs, out ConnectionInteraction interaction)
        {
            if (rhs == null)
            {
                interaction = ConnectionInteraction.Reject;
                return false;
            }

            interaction = MatchTypes(rhs);
            if (interaction == ConnectionInteraction.Reject)
            {
                return false;
            }

            var POS_EPSILON = 0.01f;
            var ROT_EPSILON = 0.95f;

            var rotationAligned = Vector3.Dot(field.transform.up, rhs.field.transform.up) > ROT_EPSILON;

            switch (axisType)
            {
                case AxisType.Dual:
                    rotationAligned = rotationAligned && Vector3.Dot(field.transform.right, rhs.field.transform.right) > ROT_EPSILON;
                    break;
            }

            var lhsPosition = Field.transform.position;
            var rhsPosition = rhs.Field.transform.position;
            return MathUtils.DistanceSquared(lhsPosition, rhsPosition) < POS_EPSILON && rotationAligned;
        }
    }
}