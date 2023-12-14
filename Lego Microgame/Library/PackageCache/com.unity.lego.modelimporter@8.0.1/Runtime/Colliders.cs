// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LEGOModelImporter
{
    /// <summary>
    /// Container for colliders on a part
    /// </summary>
    public class Colliders : MonoBehaviour, IEnumerable<Collider>
    {
        /// <summary>
        /// The asset version of this object
        /// </summary>
        public int version = 0;

        /// <summary>
        /// List of colliders
        /// </summary>
        [HideInInspector] public List<Collider> colliders = new List<Collider>();

        /// <summary>
        /// The part this collider object belongs to
        /// </summary>
        public Part part;

        /// <inheritdoc/>
        public IEnumerator<Collider> GetEnumerator()
        {
            foreach(var collider in colliders)
            {
                yield return collider;
            }
        }

        /// <inheritdoc/>
        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }
    }
}
