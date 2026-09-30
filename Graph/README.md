# 🕸️ Graph 🌐

A collection of **Graph programs in C** covering graph representation using **adjacency matrix** and **adjacency list**, along with the two fundamental traversal algorithms — **BFS** and **DFS**. Built for **academic learning** and **lab exam practice**.

---

## 🧱 Folder Structure

```bash
Graph/
│
├── Representation_Of_Directed_Graph.cpp            # Adjacency matrix (directed)
├── Representation_Of_Undirected_Graph.cpp          # Adjacency matrix (undirected)
├── Representation_Of_Weighted_Directed_Graph.cpp   # Adjacency matrix with edge cost
├── Graph_Using_List.cpp                            # Adjacency list (menu-driven)
├── Breadth_First_Search_BFS.cpp                    # BFS traversal
├── Depth_First_Search_DFS.cpp                      # DFS traversal
└── README.md                                       # Folder documentation
```

---

## ✨ Programs

| Program                                           | Description                                                                                          |
| ------------------------------------------------- | ---------------------------------------------------------------------------------------------------- |
| **Representation_Of_Directed_Graph.cpp**          | Builds the adjacency matrix of a directed graph                                                      |
| **Representation_Of_Undirected_Graph.cpp**        | Builds the adjacency matrix of an undirected graph                                                   |
| **Representation_Of_Weighted_Directed_Graph.cpp** | Stores edge cost in the adjacency matrix of a weighted directed graph                                |
| **Graph_Using_List.cpp**                          | Menu: Insert Vertex, Display Vertex, Search Vertex, Insert Edge, Find Adjacency, Display Graph, Exit |
| **Breadth_First_Search_BFS.cpp**                  | Level-by-level traversal from a starting vertex                                                      |
| **Depth_First_Search_DFS.cpp**                    | Depth-first traversal from a starting vertex                                                         |

---

## 🛠 Concepts Covered

- Graph terminology: vertices, edges, directed vs undirected, weighted graphs
- **Adjacency Matrix** (`adj[50][50]`) — simple, O(1) edge lookup
- **Adjacency List** using linked nodes — space-efficient for sparse graphs
- Edge validation (rejects vertices outside `1..V`)
- **BFS** and **DFS** with a `visited[]` array

---

## 🔍 Matrix vs List

| Feature         | Adjacency Matrix | Adjacency List |
| --------------- | ---------------- | -------------- |
| **Space**       | O(V²)            | O(V + E)       |
| **Edge lookup** | O(1)             | O(degree)      |
| **Best for**    | Dense graphs     | Sparse graphs  |

---

## ▶️ How to Run

```bash
tcc Breadth_First_Search_BFS.cpp
Breadth_First_Search_BFS.exe
```

> ℹ️ These programs use Turbo C-style headers (`conio.h`, `alloc.h`, `process.h`) and `void main()`.
> Use **Turbo C / DOSBox**, or replace `clrscr()`/`getch()` and `alloc.h` for modern compilers.

---

## ▶️ Sample Usage

```bash
Enter Total Vertices: 4
Enter Total Edges: 3

Enter Source Vertex: 1
Enter Destination Vertex: 2
...
Enter Starting Vertex: 1

BFS Result: 1 2 3 4
```

```bash
1:Insert Vertex
2:Display Vertex
3:Search Vertex
4:Insert Edge
5:Find Adjency
6:Display Graph
7:Exit
```

---

## ⚠️ Common Errors

- **"Invalid Edge"** → Source/destination vertex is `≤ 0` or greater than the total vertices
- **Vertex numbering** → Vertices are 1-indexed (`1` to `V`), not 0-indexed
- **Size limit** → Adjacency matrices are fixed at 50×50, so keep the vertex count below 50
- **`conio.h` not found** → Turbo C-only header; use Turbo C/DOSBox

---

## 🌟 Future Enhancements

- Add Dijkstra's shortest path and Prim's / Kruskal's MST
- Add cycle detection and topological sort
- Add connected-component counting
- Allow dynamic matrix size based on user input

---

## 🪪 Author

> **Creator: Shakal Bhau**

> **GitHub: [ShakalBhau0001](https://github.com/ShakalBhau0001)**

---
