# 🌳 Tree 🌲

A collection of **Binary Search Tree (BST) programs in C** covering insertion,searching, traversals, node counting, min/max, level finding, node-child checking, and **node deletion**. All programs are **menu-driven**, use dynamic memory, and are built for **academic learning** and **lab exam practice**.

---

## 🧱 Folder Structure

```bash
Tree/
│
├── Binary_Search_Tree_BST.cpp                  # Full BST operations
├── Tree_Traversal.cpp                          # Pre / In / Post-order traversal
├── Checking_Entered_Nodes_Children.cpp         # Leaf / one child / two children check
├── Deleting_Node_From_Binary_Search_Tree.cpp   # Delete a node from BST
└── README.md                                   # Folder documentation
```

---

## ✨ Programs

| Program                                       | Menu Operations                                                                                                        |
| --------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------- |
| **Binary_Search_Tree_BST.cpp**                | Insert, Leaf Count, Total Node Count, Search, InOrder, Find Max, Find Min, Display Even, Display Odd, Find Level, Exit |
| **Tree_Traversal.cpp**                        | Insert, PreOrder (VLR), InOrder (LVR), PostOrder (LRV), Exit                                                           |
| **Checking_Entered_Nodes_Children.cpp**       | Insert, Check Node (leaf / one child / two children), InOrder, Exit                                                    |
| **Deleting_Node_From_Binary_Search_Tree.cpp** | Insert, InOrder, Delete, Exit                                                                                          |

---

## 🛠 Concepts Covered

- Binary tree node structure: `left`, `info`, `right`
- BST insertion rule (smaller → left, larger → right)
- Tree traversals: **Preorder (VLR)**, **Inorder (LVR)**, **Postorder (LRV)**
- Counting leaf nodes and total nodes recursively
- Finding minimum, maximum, and the **level** of a node
- Classifying a node as leaf, single-child, or two-child
- BST node deletion

---

## 🔍 Traversal Reference

| Traversal     | Order               | On a BST         |
| ------------- | ------------------- | ---------------- |
| **PreOrder**  | Root → Left → Right | Root first       |
| **InOrder**   | Left → Root → Right | Sorted ascending |
| **PostOrder** | Left → Right → Root | Root last        |

---

## ▶️ How to Run

```bash
tcc Binary_Search_Tree_BST.cpp
Binary_Search_Tree_BST.exe
```

> ℹ️ These programs use Turbo C-style headers (`conio.h`, `alloc.h`, `process.h`).
> Use **Turbo C / DOSBox**, or replace `alloc.h` with `<stdlib.h>` and remove `clrscr()`/`getch()` for modern compilers.

---

## ▶️ Sample Usage

```bash
1:Insert:->
2:[VLR]Traverse PreOrder:->
3:[LVR]Traverse InOrder:->
4:[LRV]Traverse PostOrder:->
5:Exit:->

Enter Choice:-> 1
Enter Insert Value:-> 50
Node Is Inserted...
```

```bash
Enter Node Value to Check:-> 30
The node has two children.
```

---

## ⚠️ Common Errors

- **"Node is not found"** → Searching/deleting a value that isn't in the tree
- **Duplicate values** → BST logic assumes unique node values
- **Tree not initialized** → `root` must start as `NULL` before the first insert
- **`alloc.h` not found** → Turbo C-only header; use `<stdlib.h>` on modern compilers

---

## 🌟 Future Enhancements

- Add tree height/depth calculation
- Add level-order (BFS) traversal using a queue
- Add AVL tree balancing
- Free all nodes on exit to avoid memory leaks

---

## 🪪 Author

> **Creator: Shakal Bhau**

> **GitHub: [ShakalBhau0001](https://github.com/ShakalBhau0001)**

---
