// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.Collections.Generic;
using UnityEngine;

namespace LEGOModelImporter
{
	/// <summary>
    /// Represents an LXFML Document
    /// </summary>
	public class LXFMLDoc
	{
		/// <summary>
        /// The bricks in the document
        /// </summary>
		public List<Brick> bricks = new List<Brick>();

		/// <summary>
        /// An LXFML document may or may not contain a camera
        /// </summary>
		public LxfmlCamera camera;

		/// <summary>
        /// Brick groups from the LXFML document
        /// </summary>
		public BrickGroup[] groups;

		/// <summary>
        /// The model name from the LXFML document
        /// </summary>
		public string name;

		/// <summary>
        /// Represents LXFML brick groups
        /// </summary>
		public class BrickGroup
		{
			/// <summary>
            /// The group name
            /// </summary>
			public string name;

			/// <summary>
            /// The number or index of the group
            /// </summary>
			public int number;

			/// <summary>
            /// Child groups for nested groups
            /// </summary>
			public BrickGroup[] children;

			/// <summary>
            /// Parent group for nested groups
            /// </summary>
			public BrickGroup parent;

			/// <summary>
            /// The bricks that this group references
            /// </summary>
			public int[] brickRefs;

			// TODO: Fill from part refs!
			/// <summary>
            /// The bricks in this group
            /// </summary>
			public List<Brick> bricks = new List<Brick>();
		}

		/// <summary>
        /// Represents an LXFML camera
        /// </summary>
		public class LxfmlCamera
		{
			/// <summary>
            /// The distance to
            /// </summary>
			public float distance;

			/// <summary>
            /// The FOV of the camera
            /// </summary>
			public float fov;

			/// <summary>
            /// Transformation matrix of the camera as a float array
            /// </summary>
			public float[] transformation;

			/// <summary>
            /// The position of the camera
            /// </summary>
			public Vector3 position;

			/// <summary>
            /// The rotation of the camera
            /// </summary>
			public Quaternion rotation;
		}

		/// <summary>
        /// An LXFML brick
        /// </summary>
        /// <remarks>
        /// A brick is essentially a part container
        /// </remarks>
		public class Brick
		{
			/// <summary>
            /// The brick design ID
            /// </summary>
			public string designId;

			/// <summary>
            /// Parts that this brick contains
            /// </summary>
			public Part[] parts;

			/// <summary>
            /// A brick refId
            /// </summary>
            /// <remarks>
            /// The refId is what the rest of the document references, so for one document each brick has a unique refId
            /// </remarks>
			public int refId;

			/// <summary>
            /// A unique identifier
            /// </summary>
			public string uuid;

			/// <summary>
            /// An LXFML part
            /// </summary>
            /// <remarks>
            /// A part contains information about materials and decorations 
            /// </remarks>
			public class Part
			{
				/// <summary>
                /// An LXFML material
                /// </summary>
				public class Material
				{
					/// <summary>
                    /// The LEGO color Id of the material
                    /// </summary>
					public int colorId;

					/// <summary>
                    /// The LEGO shader Id
                    /// </summary>
                    /// <remarks>
                    /// This could be shiny plastic/rubber etc.
                    /// </remarks>
					public int shaderId;

                    /// <inheritdoc/>
					public new string ToString() { return $"{colorId}/{shaderId}"; }
				}

				/// <summary>
                /// An LXFML decoration
                /// </summary>
				public class Decoration
				{
					/// <summary>
                    /// The id of the decoration image
                    /// </summary>
					public string imageId;

					/// <summary>
                    /// The surface name that this decoration belongs to
                    /// </summary>
					public string surfaceName;

                    /// <inheritdoc/>
					public new string ToString() { return $"{imageId}/{surfaceName}"; }
				}

				/// <summary>
                /// Bones within this part
                /// </summary>
                /// <remarks>
                /// Only flex bricks contain more than 1 bone
                /// </remarks>
				public Bone[] bones;

				/// <summary>
                /// Decorations on this part
                /// </summary>
				public Decoration[] decorations;

				/// <summary>
                /// The design id of the parent brick
                /// </summary>
				public string brickDesignId;

				/// <summary>
				/// The design id of the part
				/// </summary>
				public string partDesignId;

				/// <summary>
                /// The materials that this part has
                /// </summary>
                /// <remarks>
                /// Most parts only have a single material, but if the part has colour change surfaces there can be any number of materials
                /// </remarks>
				public Material[] materials;

				/// <summary>
				/// The part refId
				/// </summary>
				/// /// <remarks>
				/// The refId is what the rest of the document references, so for one document each part has a unique refId
				/// </remarks>
				public int refId;

				/// <summary>
                /// An LXFML bone
                /// </summary>
                /// <remarks>
                /// A bone represents the physical part of a part and contains the transformation.
                /// Only flex bricks contain more than one bone, so in the general case a bone is equivalent to a part.
                /// </remarks>
				public class Bone
				{
					/// <summary>
                    /// The position of the bone
                    /// </summary>
					public Vector3 position;

					/// <summary>
					/// The bone refId
					/// </summary>
					/// /// <remarks>
					/// The refId is what the rest of the document references, so for one document each bone has a unique refId
					/// </remarks>
					public int refId;

					/// <summary>
                    /// The rotation of the bone
                    /// </summary>
					public Quaternion rotation;
				}
			}
		}
	}

}