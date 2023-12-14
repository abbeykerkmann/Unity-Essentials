// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System;
using System.Collections.Generic;
using UnityEngine;

namespace LEGOModelImporter
{
    /// <summary>
    /// A serializable dictionary
    /// </summary>
    /// <typeparam name="TKey">The key type</typeparam>
    /// <typeparam name="TValue">The value type</typeparam>
    [Serializable]
    public class SerializableDictionary<TKey, TValue> : Dictionary<TKey, TValue>, ISerializationCallbackReceiver
    {
        [SerializeField]
        private List<TKey> keys = new List<TKey>();
     
        [SerializeField]
        private List<TValue> values = new List<TValue>();

        /// <summary>
        /// Constructs a dictionary from any other dictionary
        /// </summary>
        /// <param name="otherDictionary">The input dictionary</param>
        public SerializableDictionary(SerializableDictionary<TKey, TValue> otherDictionary) : base(otherDictionary)
        {
            keys = new List<TKey>();
            values = new List<TValue>();
        }

        /// <summary>
        /// Constructs a dictionary with pre-allocated capacity
        /// </summary>
        /// <param name="capacity"></param>
        public SerializableDictionary(int capacity) : base(capacity)
        {
            keys = new List<TKey>();
            values = new List<TValue>();
        }

        /// <summary>
        /// Constructs an empty dictionary
        /// </summary>
        public SerializableDictionary() : base()
        {
            keys = new List<TKey>();
            values = new List<TValue>();
        }

        /// <summary>
        /// Saves the dictionary to internal lists
        /// </summary>
        public void OnBeforeSerialize()
        {
            keys.Clear();
            values.Clear();
            foreach(KeyValuePair<TKey, TValue> pair in this)
            {
                keys.Add(pair.Key);
                values.Add(pair.Value);
            }
        }

        /// <summary>
        /// Load dictionaries from internal lists
        /// </summary>
        /// <exception cref="SerializationException">Throws if keys do not match values</exception>
        public void OnAfterDeserialize()
        {
            Clear();
 
            if(keys.Count != values.Count)
                throw new System.Exception(string.Format("there are {0} keys and {1} values after deserialization. Make sure that both key and value types are serializable.", keys.Count, values.Count));
 
            for(int i = 0; i < keys.Count; i++)
                Add(keys[i], values[i]);
        }
    }

    /// <summary>
    /// Implementation of a serializable dictionary from integers to model group import settings
    /// </summary>
    /// <remarks>
    /// To serialize generic types it was previously required to use a wrapper class conrectizing the generic types
    /// </remarks>
    [Serializable]
    public class DictionaryIntToModelGroupImportSettings : SerializableDictionary<int, ModelGroupImportSettings>
    {
        /// <summary>
        /// Copy constructor
        /// </summary>
        /// <param name="dictionary">Another dictionary</param>
        public DictionaryIntToModelGroupImportSettings(DictionaryIntToModelGroupImportSettings dictionary) : base(dictionary)
        {}

        /// <summary>
        /// Constructs dictionary with pre-allocated capacity
        /// </summary>
        /// <param name="capacity">THe capacity</param>
        public DictionaryIntToModelGroupImportSettings(int capacity) : base(capacity)
        {}

        /// <summary>
        /// Constructs empty dictionary
        /// </summary>
        public DictionaryIntToModelGroupImportSettings() : base()
        {}
    }
}