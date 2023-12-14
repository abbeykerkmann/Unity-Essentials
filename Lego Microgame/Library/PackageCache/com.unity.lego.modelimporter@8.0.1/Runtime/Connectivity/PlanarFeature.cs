// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System;
using System.Collections.Generic;
using UnityEngine;

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents a LEGO planar feature.
    /// </summary>
    /// <remarks>
    /// Planar features are the most basic and classic LEGO System connectivity types.
    /// If you imagine any classic LEGO brick with knobs on top and tubes at the bottom,
    /// those are planar features.
    /// </remarks>
    [Serializable]
    public class PlanarFeature : Connection
    {
        /// <summary>
        /// Planar feature types
        /// </summary>
        public enum PlanarConnectionType
        {
            /// <summary>
            /// A basic knob
            /// </summary>
            knob = 0,

            /// <summary>
            /// A knob with a hole that can connect to certain pin types
            /// </summary>
            hollowKnob,

            /// <summary>
            /// A knob similar to <see cref="knob"/> that fits in a peg hole
            /// </summary>
            knobFitInPegHole,

            /// <summary>
            /// A hollow knob similar to <see cref="hollowKnob"/> plus it fits in a peg holde
            /// </summary>
            hollowKnobFitInPegHole,

            /// <summary>
            /// A knob that only fits in a square anti knob
            /// </summary>
            squareKnob,

            /// <summary>
            /// A basic tube that is usually on the bottom of bricks
            /// </summary>
            tube,

            /// <summary>
            /// Similar to <see cref="tube"/>, but has ribs sticking out to the sides rejecting a <see cref="tubeGrabber"/>
            /// </summary>
            tubeWithRib,

            /// <summary>
            /// Similar to a <see cref="tube"/>, but cannot connect to a <see cref="tubeGap"/>
            /// </summary>
            bottomTube,

            /// <summary>
            /// Similar to <see cref="tubeWithRib"/> but cannot connect to a <see cref="tubeGap"/>.
            /// </summary>
            bottomTubeWithRib,

            /// <summary>
            /// A secondary pin. Fits in a <see cref="hollowKnob"/>
            /// </summary>
            secondaryPin,

            /// <summary>
            /// Similar to <see cref="secondaryPin"/> but with ribs sticking out to the sides
            /// </summary>
            secondaryPinWithRib,

            /// <summary>
            /// Similar to <see cref="secondaryPin"/> but with a hole that can connect to a <see cref="tinyPin"/>
            /// </summary>
            secondaryPinWithTinyPinReceptor,

            /// <summary>
            /// Similar to <see cref="secondaryPinWithRib"/> but with a hole that can connect to a <see cref="tinyPin"/>
            /// </summary>
            secondaryPinWithRibAndTinyPinReceptor,

            /// <summary>
            /// Tube that can not rotate and can only connect in 4 90 degree orientations
            /// </summary>
            fixedTube,

            /// <summary>
            /// Similar to <see cref="fixedTube"/>, but knobs can also connect
            /// </summary>
            fixedTubeWithAntiKnob,

            /// <summary>
            /// An ordinary anti knob, which connects to most knobs
            /// </summary>
            antiKnob,
            //                       antiKnobWithSecondaryPin,   // Has a pin inside that Reject knobs but not hollow knobs

            /// <summary>
            /// Anti knob at the end of peg holdes that only connects to special knobs
            /// </summary>
            pegHole,

            /// <summary>
            /// Similar to anti knob plus <see cref="squareKnob"/> fits in it
            /// </summary>
            squareAntiKnob,

            /// <summary>
            /// A receptor located diagonally between 4 knobs
            /// </summary>
            tubeGap,

            /// <summary>
            /// Wine glass that connects to a tube, rejects <see cref="tubeWithRib"/> and <see cref="bottomTubeWithRib"/>
            /// </summary>
            tubeGrabber,

            /// <summary>
            /// A tiny pin connector
            /// </summary>
            tinyPin,

            /// <summary>
            /// A tiny pin receptor
            /// </summary>
            tinyPinReceptor,

            /// <summary>
            /// An edge of any kind
            /// </summary>
            edge,

            /// <summary>
            /// A gap between edges
            /// </summary>
            edgeGap,

            /// <summary>
            /// Reject knobs but not hollow knobs. No connection to either
            /// </summary>
            knobReject,

            /// <summary>
            /// Left top power function
            /// </summary>
            powerFuncLeftTop,

            /// <summary>
            /// Right top power function
            /// </summary>
            powerFuncRightTop,

            /// <summary>
            /// Left bottom power function
            /// </summary>
            powerFuncLeftBottom,

            /// <summary>
            /// Right bottom power function
            /// </summary>
            powerFuncRightBottom,

            /// <summary>
            /// A void feature, which means it is a no-op for every connection (always ignore)
            /// </summary>
            voidFeature,

            /// <summary>
            /// A duplo knob (see <see cref="knob"/>)
            /// </summary>
            duploKnob,

            /// <summary>
            /// A duplo hollow knob (see <see cref="hollowKnob"/>)
            /// </summary>
            duploHollowKnob,

            /// <summary>
            /// A duplo anti knob (see <see cref="antiKnob"/>)
            /// </summary>
            duploAntiKnob,

            /// <summary>
            /// A duplo tube (see <see cref="tube"/>)
            /// </summary>
            duploTube,

            /// <summary>
            /// A duplo fixed tube (see <see cref="fixedTube"/>)
            /// </summary>
            duploFixedTube,

            /// <summary>
            /// A duplo tube gap (see <see cref="tubeGap"/>)
            /// </summary>
            duploTubeGap,

            /// <summary>
            /// A duplo animal knob
            /// </summary>
            duploAnimalKnob,

            /// <summary>
            /// A duplo animal tube
            /// </summary>
            duploAnimalTube,

            /// <summary>
            /// Similar to <see cref="hollowKnob"/>, but cannot connect on the outside
            /// </summary>
            secondaryPinReceptor,

            /// <summary>
            /// Duplo fixed animal tube
            /// </summary>
            duploFixedAnimalTube,

            /// <summary>
            /// Connect to <see cref="duploHollowKnob"/> but reject <see cref="duploAnimalKnob"/>
            /// </summary>
            duploSecondaryPinWithRib,

            /// <summary>
            /// Connect to both <see cref="duploHollowKnob"/> and <see cref="duploAnimalKnob"/>
            /// </summary>
            duploSecondaryPin,

            /// <summary>
            /// Reject <see cref="duploKnob"/> but not <see cref="duploHollowKnob"/> nor <see cref="duploAnimalKnob"/>. Does not connect to either of the latter.
            /// </summary>
            duploKnobReject,
        }

        /// <summary>
        /// A connection feature has flags that determine how things are connected
        /// </summary>
        public enum Flags
        {
            /// <summary>
            /// This feature is square (used for geometry optimization)
            /// </summary>
            squareFeature = 1 << 0,

            /// <summary>
            /// This feature is round (used for geometry optimization)
            /// </summary>
            roundFeature = 1 << 1,

            /// <summary>
            /// Use hollow knob collision volumes
            /// </summary>
            knobWithHole = 1 << 2,

            /// <summary>
            /// Use mini-figure hand knob collision volumes
            /// </summary>
            knobWithMiniFigHandHole = 1 << 3,

            /// <summary>
            /// Use single "hole" collision volume off to one side
            /// </summary>
            knobWithSingleCollision = 1 << 4,

            /// <summary>
            /// Feature is from a "single" sized field
            /// </summary>
            singleFeature = 1 << 5,

            /// <summary>
            /// When connecting, don't remove the knob collision volume
            /// </summary>
            receptorDontRemoveKnobCollision = 1 << 6,

            /// <summary>
            /// Knob should never have active collision volumes
            /// </summary>
            knobWithoutCollision = 1 << 7,
        }

        /// <summary>
        /// Flags for a feature covering a knobs (used for optimization)
        /// </summary>
        public static readonly Flags flagsCoveringKnob = Flags.squareFeature | Flags.roundFeature;

        /// <summary>
        /// Flags for a feature covering a tube (used for optimization)
        /// </summary>
        public static readonly Flags flagsCoveringTube = Flags.squareFeature;

        /// <summary>
        /// The planar type of this feature
        /// </summary>
        public PlanarConnectionType connectionType;

        /// <summary>
        /// How many quadrants this feature spans
        /// </summary>
        public int quadrants;

        /// <summary>
        /// The index of this feature in its parent field
        /// </summary>
        public int index;

        /// <summary>
        /// The <see cref="Flags"/> this feature has
        /// </summary>
        public Flags flags;

        /// <summary>
        /// The knob this feature corresponds to. May be null if not a knob
        /// </summary>
        public Knob knob;

        /// <summary>
        /// The tube(s) this feature corresponds to. May be empty if not relevant for any tubes
        /// </summary>
        public List<Tube> tubes;

        /// <summary>
        /// The <see cref="PlanarField"/> this feature belongs to
        /// </summary>
        public PlanarField Field => field as PlanarField;

        ///<summary> 
        /// Connectivity interaction matrix
        /// Generated from connectivity matrix sheet: Connectivity Matrix.xls through python script .\load_connectivity_matrix.py.
        /// Last updated on: Wed Dec  9 11:33:41 2020
        ///</summary>
        private const int connectivityMatrixHeight = 43;
        private const int connectivityMatrixWidth = 43;

        private static readonly ConnectionInteraction[] connectivityMatrix = new ConnectionInteraction[connectivityMatrixWidth * connectivityMatrixHeight] {
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Fixed, ConnectionInteraction.Fixed, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Fixed, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
        };

        /// <summary>
        /// Check whether or not a feature is a knob
        /// </summary>
        /// <param name="connection">The feature to check</param>
        /// <returns>Returns <see langword="true"/> if feature is a knob, <see langword="false"/> otherwise.</returns>
        public static bool IsKnob(PlanarFeature connection)
        {
            switch (connection.connectionType)
            {
                case PlanarConnectionType.knob:
                case PlanarConnectionType.hollowKnob:
                case PlanarConnectionType.hollowKnobFitInPegHole:
                case PlanarConnectionType.knobFitInPegHole:
                    return true;
            }
            return false;
        }

        /// <summary>
        /// Update visibility on knobs and tubes related to this feature
        /// </summary>
        /// <remarks>
        /// This method also registers prefab changes editor time
        /// </remarks>
        public void UpdateKnobsAndTubes()
        {            
            if (knob)
            {
                knob.UpdateVisibility();
                RegisterPrefabChanges(knob.gameObject);
            }

            foreach (var tube in tubes)
            {
                if (tube)
                {
                    tube.UpdateVisibility();
                    RegisterPrefabChanges(tube.gameObject);
                }
            }
        }

        /// <summary>
        /// Check whether or not this feature is relevant for tubes
        /// </summary>
        /// <returns><see langword="true"/> if the feature is relevant for a tube <see langword="false"/> otherwise</returns>
        internal bool IsRelevantForTube()
        {
            // FIXME Temporary fix to tube removal while we work on connections that are related/non-rejecting but not connected.
            return connectionType == PlanarConnectionType.antiKnob || connectionType == PlanarConnectionType.squareAntiKnob;
        }

        /// <inheritdoc/>
        public override ConnectionInteraction MatchTypes(Connection rhs)
        {
            var i = (int)connectionType;
            var j = (int)(rhs as PlanarFeature).connectionType;
            var index = i + j * connectivityMatrixWidth;
            return connectivityMatrix[index];
        }

        /// <summary>
        /// Get the connection this connection is connected to
        /// </summary>
        /// <returns>Returns the feature that this feature is connected to</returns>
        public PlanarFeature GetConnection()
        {
            return Field.GetConnection(index);
        }        

        /// <summary>
        /// Check this feature is connected to something
        /// </summary>
        /// <returns>Returns <see langword="true"/> if this feature has a connection, <see langword="false"/> otherwise</returns>
        public bool HasConnection()
        {
            return Field.HasConnection(index);
        }

        /// <summary>
        /// Check whether a connection type can connect with anything
        /// </summary>
        /// <returns>Returns <see langword="true"/> if this feature is a connectable type, <see langword="false"/> otherwise</returns>
        public bool IsConnectableType()
        {
            var startIndex = (int)connectionType;
            var endIndex = startIndex + connectivityMatrixWidth;
            for (var i = startIndex; i < endIndex; i++)
            {
                if (IsConnectable(connectivityMatrix[i]))
                {
                    return true;
                }
            }
            return false;
        }

        /// <summary>
        /// Find the offset this connection should have to give a visual 'click' animation
        /// </summary>
        /// <returns>Returns the offset</returns>
        public Vector3 GetPreconnectOffset()
        {
            switch (connectionType)
            {
                case PlanarConnectionType.knob:
                case PlanarConnectionType.hollowKnob:
                case PlanarConnectionType.knobFitInPegHole:
                case PlanarConnectionType.hollowKnobFitInPegHole:
                case PlanarConnectionType.tubeGap:
                case PlanarConnectionType.edgeGap:
                    {
                        return field.transform.TransformDirection(Vector3.up * 0.1f);
                    }
                case PlanarConnectionType.tube:
                case PlanarConnectionType.antiKnob:
                case PlanarConnectionType.squareAntiKnob:
                case PlanarConnectionType.bottomTube:
                case PlanarConnectionType.bottomTubeWithRib:
                case PlanarConnectionType.fixedTubeWithAntiKnob:
                case PlanarConnectionType.edge:
                case PlanarConnectionType.secondaryPin:
                case PlanarConnectionType.pegHole:
                    {
                        return field.transform.TransformDirection(Vector3.down * 0.1f);
                    }
            }
            
            return Vector3.zero;
        }

        /// <summary>
        /// Get the position of this feature in world space
        /// </summary>
        /// <returns>Returns the position in world space</returns>
        public Vector3 GetPosition()
        {
            return Field.GetPosition(this);
        }

        /// <summary>
        /// Check whether connecting to a feature would be valid
        /// </summary>
        /// <param name="rhs">The feature we are checkingagainst</param>
        /// <param name="match">Out parameter signifying the resulting interaction</param>
        /// <returns>Returns <see langword="true"/> if this connection is valid, <see langword="false"/> otherwise</returns>
        public bool CheckConnectionTransformationValid(PlanarFeature rhs, out ConnectionInteraction match)
        {
            if (rhs == null)
            {
                match = ConnectionInteraction.Reject;
                return false;
            }

            match = MatchTypes(rhs);
            if (match == ConnectionInteraction.Reject)
            {
                return false;
            }

            var POS_EPSILON = 0.01f;
            var ROT_EPSILON = 3.0f;

            var lhsPosition = GetPosition();
            var rhsPosition = rhs.GetPosition();
            return MathUtils.DistanceSquared(lhsPosition, rhsPosition) < POS_EPSILON && Vector3.Angle(field.transform.up, rhs.field.transform.up) < ROT_EPSILON;
        }        
    }
}
