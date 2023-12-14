// Copyright (C) LEGO System A/S - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited

using System.Linq;
using System.Collections.Generic;

namespace LEGOModelImporter
{
    /// <summary>
    /// Implementation of a directed graph with a topological sort
    /// </summary>
    /// <typeparam name="T">The data type of the graph</typeparam>
    internal class DirectedGraph<T>
    {
        /// <summary>
        /// A graph node
        /// </summary>
        public class Node
        {
            /// <summary>
            /// The data of the node
            /// </summary>
            public T data;
        }

        /// <summary>
        /// A graph edge between two nodes
        /// </summary>
        public class Edge
        {
            /// <summary>
            /// The source node of the edge
            /// </summary>
            public Node src;

            /// <summary>
            /// The destination node of the edge
            /// </summary>
            public Node dst;
        }

        private HashSet<Node> nodes = new HashSet<Node>();
        private HashSet<Edge> edges = new HashSet<Edge>();

        /// <summary>
        /// Add a node to the graph
        /// </summary>
        /// <param name="node">The node to add</param>
        public void AddNode(Node node)
        {
            nodes.Add(node);
        }

        /// <summary>
        /// Add an edge between two nodes
        /// </summary>
        /// <param name="src">The source node</param>
        /// <param name="dst">The destination node</param>
        public void AddEdge(Node src, Node dst)
        {
            var edge = new Edge() { src = src, dst = dst };
            edges.Add(edge);
        }

        /// <summary>
        /// Topologically sort the graph
        /// </summary>
        /// <returns>Returns a list of nodes sorted topologically</returns>
        public List<Node> TopologicalSort()
        {
            var result = new List<Node>();
            var visited = new HashSet<Node>();
            var worklist = new Queue<Node>();

            // Find roots.
            foreach (var node in nodes)
            {
                if (!edges.Any(edge => edge.dst == node))
                {
                    worklist.Enqueue(node);
                }
            }

            // Depth-first traversal of graph.
            while (worklist.Count > 0)
            {
                var currentNode = worklist.Dequeue();
                if (!visited.Contains(currentNode))
                {
                    visited.Add(currentNode);
                    result.Add(currentNode);

                    foreach (var edge in edges)
                    {
                        if (edge.src == currentNode)
                        {
                            worklist.Enqueue(edge.dst);
                        }
                    }
                }
            }

            return result;
        }
    }
}
