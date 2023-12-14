using UnityEngine;
using System.Collections.Generic;

namespace LEGOModelImporter
{
    /// <summary>
    /// Use to track changed transforms and a corresponding component if you need to access special data on change
    /// </summary>
    internal class TransformTracker
    {
        private HashSet<Transform> trackedTransforms = new HashSet<Transform>();

        private HashSet<Transform> changed = new HashSet<Transform>();

        internal HashSet<Transform> Changed { get { return changed; } }

        private Dictionary<Transform, Component> components = new Dictionary<Transform, Component>();

        /// <summary>
        /// Add an array of objects to track
        /// </summary>
        /// <typeparam name="T">Generic type that is a subtype of <see cref="Component"/></typeparam>
        /// <param name="transformsToTrack">The transforms to track"/></param>
        internal void TrackTransforms<T>(T[] transformsToTrack) where T : Component
        {
            foreach(var t in transformsToTrack)
            {
                trackedTransforms.Add(t.transform);
                components[t.transform] = t;
            }
            BeginFrame();
        }

        /// <summary>
        /// Check if a transform has changed in this frame
        /// </summary>
        /// <param name="transform">The transform to check</param>
        /// <returns>Returns <see langword="true"/> if the transform has changed, <see langword="false"/> otherwise</returns>
        internal bool HasChanged(Transform transform)
        {
            return changed.Contains(transform);
        }

        /// <summary>
        /// Get the component corresponding to a tracked transform.
        /// This function casts the component for you.
        /// </summary>
        /// <typeparam name="T">The type of the component to cast to</typeparam>
        /// <param name="transform">The transform to get the component off of</param>
        /// <returns>Returns the cast component type. Returns null if the type is a mismatch or the transform isn't tracked</returns>
        internal T GetComponent<T>(Transform transform) where T : Component
        {
            if(components.TryGetValue(transform, out Component t))
            {
                return t as T;
            }
            return null;
        }

        /// <summary>
        /// Clear the tracker completely
        /// </summary>
        internal void Clear()
        {
            trackedTransforms.Clear();
            changed.Clear();
            components.Clear();
        }

        /// <summary>
        /// Call this when you want to begin tracking your transforms.
        /// </summary>
        internal void BeginFrame()
        {
            if (trackedTransforms == null) return;
            changed.Clear();
            foreach (var transform in trackedTransforms)
            {
                if (!transform) continue;
                if (transform.hasChanged)
                {
                    changed.Add(transform);
                }
            }
        }

        /// <summary>
        /// Call this at the end of your frame so that we make sure the changed transforms are reset
        /// </summary>
        internal void EndFrame()
        {
            foreach (var changedTransform in changed)
            {
                if (!changedTransform) continue;
                changedTransform.hasChanged = false;
            }
            changed.Clear();
        }
    }
}
