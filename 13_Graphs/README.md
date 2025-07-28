# 📊 Graph Data Structure in DSA

Graphs are a fundamental part of Data Structures and Algorithms (DSA) and play a crucial role in solving complex real-world problems like navigation, network analysis, recommendation systems, and much more.

---

## 📘 What is a Graph?

A **Graph** is a collection of **nodes (vertices)** connected by **edges**.

### Types of Graphs:
- **Directed Graph (DiGraph)**: Edges have a direction (u → v).
- **Undirected Graph**: Edges have no direction (u — v).
- **Weighted Graph**: Edges carry weights (cost, distance, time).
- **Unweighted Graph**: All edges are considered equal.
- **Cyclic / Acyclic**: Graphs with or without cycles.
- **Connected / Disconnected**: All nodes are reachable or not.

---

## 🧱 Graph Representation

### 1. **Adjacency Matrix**
- A 2D array of size `V x V` where `matrix[i][j] = 1` if edge exists.
- Space Complexity: `O(V^2)`

### 2. **Adjacency List**
- An array of lists. Each list contains all neighbors of a vertex.
- Space Efficient: `O(V + E)`

### 3. **Edge List**
- A list of all edges as pairs or triplets `(u, v)` or `(u, v, w)`.

---

## 🔁 Graph Traversal

### 1. **Breadth-First Search (BFS)**
- Uses Queue.
- Level-wise traversal.
- Time: `O(V + E)`

### 2. **Depth-First Search (DFS)**
- Uses Stack or Recursion.
- Explores as far as possible.
- Time: `O(V + E)`

---

## 📚 Common Graph Algorithms

| Algorithm                | Purpose                                | Time Complexity |
|--------------------------|-----------------------------------------|------------------|
| **DFS / BFS**            | Traversal / Connected Components        | O(V + E)         |
| **Topological Sort**     | Ordering in DAG                         | O(V + E)         |
| **Dijkstra’s Algorithm** | Shortest path (non-negative weights)   | O((V+E) log V)   |
| **Bellman-Ford**         | Shortest path (can handle negative)    | O(VE)            |
| **Floyd-Warshall**       | All pairs shortest path                | O(V^3)           |
| **Kruskal’s Algorithm**  | Minimum Spanning Tree (MST)            | O(E log E)       |
| **Prim’s Algorithm**     | MST using priority queue               | O((V+E) log V)   |
| **Union-Find (DSU)**     | Cycle detection / Disjoint sets        | O(α(N)) per op   |
| **Kosaraju / Tarjan**    | Strongly Connected Components (SCC)    | O(V + E)         |

---

## ⚠️ Cycle Detection

- **Undirected Graph**: Use DFS with parent tracking or DSU.
- **Directed Graph**: Use DFS with recursion stack.

---

## 🎯 Applications

- Maps and GPS navigation.
- Social networks (friend recommendations).
- Web page ranking (Google PageRank).
- Network routing and broadcasting.
- Course Scheduling (Topological Sort).
- AI pathfinding (A* Algorithm).

---

## 🛠️ Graph Problems Practice

- [LeetCode Graph Problems](https://leetcode.com/tag/graph/)
- [Codeforces Graph Tag](https://codeforces.com/problemset?tags=graphs)
- [Graph on GeeksforGeeks](https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/)
- [CS50 Graph Theory (YouTube)](https://www.youtube.com/watch?v=tWVWeAqZ0WU)

---

## 📁 Folder Structure (if applicable)

```bash
graphs/
├── bfs.cpp
├── dfs.cpp
├── dijkstra.cpp
├── prims.cpp
├── kruskal.cpp
├── topological_sort.cpp
├── union_find.cpp
└── readme.md
