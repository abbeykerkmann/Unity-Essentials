// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using UnityEngine;

namespace LEGOModelImporter
{
    /// <summary>
    /// Represents base for common parts such as knobs and tubes
    /// </summary>
    public abstract class CommonPart : MonoBehaviour
    {
        /// <summary>
        /// The part this common part belongs to
        /// </summary>
        public Part part;

        /// <summary>
        /// Update the visibility of the common part
        /// </summary>
        public void UpdateVisibility()
        {
            gameObject.SetActive(IsVisible());
        }

        /// <summary>
        /// Override this to implement how to determine visibility for a common part
        /// </summary>
        /// <returns>Returns <see langword="true"/> if the common part is visible <see langword="false"/> otherwise</returns>
        public abstract bool IsVisible();
    }
}