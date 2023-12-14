// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using LEGOMaterials;

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents a knob on a part
    /// </summary>
    public class Knob : CommonPart
    {
        /// <summary>
        /// The connection index in a field this knob corresponds to
        /// </summary>
        /// <remarks>
        /// May be -1 if there is no connectivity on the part
        /// </remarks>
        public int connectionIndex = -1;

        /// <summary>
        /// The field this knob corresponds to
        /// </summary>
        /// <remarks>
        /// May be null if there is no connectivity on the part
        /// </remarks>
        public PlanarField field = null;

        /// <inheritdoc/>
        public override bool IsVisible()
        {
            if(!field.HasConnection(connectionIndex))
            {
                return true;
            }
            var connection = field.connections[connectionIndex];
            var connectedTo = field.GetConnection(connectionIndex);
            var notCovering = (connection.flags & PlanarFeature.flagsCoveringKnob) == 0 || (connectedTo.flags & PlanarFeature.flagsCoveringKnob) == 0;
            notCovering |= MouldingColour.IsAnyTransparent(part.materialIDs) || MouldingColour.IsAnyTransparent(connectedTo.field.connectivity.part.materialIDs);

            return notCovering;
        }
    }
}

