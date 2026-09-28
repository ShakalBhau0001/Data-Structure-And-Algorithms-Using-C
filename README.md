# 📚 Data-Structure-And-Algorithms-Using-C-Cpp 🧮

A collection of classic **Data Structures & Algorithms implemented in C**,covering Arrays, Linked Lists, Stacks, Queues, Trees, and Graphs along with a few **standalone C/C++ practice programs**.

This repo is built for **academic learning**, **lab exam practice**, and **revising core DSA concepts** with clean, self-contained `.cpp` programs — one concept, one file.

---

## 🧱 Project Structure

```bash
Data-Structure-And-Algorithms-Using-C-Cpp/
│
├── Array/                 # Array-based programs
├── Linked-List/           # Singly, Doubly & Circular Linked List programs
├── Stack/                 # Stack-based programs & expression conversions
├── Queue/                 # Linear, Circular, Priority Queue & Deques
├── Tree/                  # Binary Search Tree programs
├── Graph/                 # Graph representation & traversal programs
├── static_dsa_program/    # Standalone practice programs (LeetCode-style)
└── README.md              # Project documentation
```

---

## ✨ Features

### 🔢 Array

- Static array creation, traversal, insertion & deletion
- Even/Odd element extraction and Min/Max search
- Matrix Addition, Subtraction & Multiplication

### 🔗 Linked List

- Singly Linear & Singly Circular Linked List
- Doubly Linear & Doubly Circular Linked List
- Linked List used to implement a **Dynamic Stack** and **Dynamic Queue**

### 📥 Stack

- Static Stack (array-based) implementation
- Infix → Postfix and Infix → Prefix conversion
- Postfix expression evaluation
- Balanced expression (valid/invalid) checker
- Decimal → Binary conversion using Stack
- Vowel counting and String reversal/palindrome check using Stack

### 📤 Queue

- Linear Queue & Circular Queue
- Priority Queue (priority-based insertion/removal)
- Input-Restricted Deque & Output-Restricted Deque

### 🌳 Tree

- Binary Search Tree (BST) — insertion & display
- Tree Traversals (Inorder, Preorder, Postorder)
- Deleting a node from a BST
- Checking a node's children on entry

### 🕸️ Graph

- Representation of Directed, Undirected & Weighted Directed Graphs
- Graph representation using Adjacency List
- Breadth-First Search (BFS)
- Depth-First Search (DFS)

### 🧩 Static DSA Programs

- Palindrome number check
- Two Sum (classic LeetCode-style problem)
- Swapping two numbers without a third variable
- Single Number problem (classic LeetCode-style problem)

---

## 🛠 Technologies Used

| Technology                        | Purpose                                                |
| --------------------------------- | ------------------------------------------------------ |
| **C**                             | Core language for all DSA implementations              |
| **C++ (iostream)**                | Used in a few `static_dsa_program` files               |
| **conio.h / alloc.h / process.h** | Turbo C-style I/O, memory allocation & process control |


> ⚠️ Programs using `conio.h`, `alloc.h`, and `void main()` are written in the **Turbo C / Borland C** style commonly taught in academics.

> Use **Turbo C**, **DOSBox + Turbo C**, or an updated compiler (replacing `clrscr()`/`alloc.h` with modern equivalents) to compile them on newer systems.

---

## ▶️ How to Run

### 1️⃣ Clone the repository

```bash
git clone https://github.com/ShakalBhau0001/Data-Structure-And-Algorithms-Using-C-Cpp.git
```

### 2️⃣ Enter the project directory

```bash
cd Data-Structure-And-Algorithms-Using-C-Cpp
```

### 3️⃣ Compile & Run a program

#### Using Turbo C / Borland C (classic academic setup)

```bash
tcc Array/Static_Array.cpp
Static_Array.exe
```

#### Using GCC (for `static_dsa_program`, which doesn't use Turbo C headers)

```bash
gcc static_dsa_program/two_sum.cpp -o two_sum
./two_sum
```

```bash
g++ static_dsa_program/swap_2_nums.cpp -o swap_2_nums
./swap_2_nums
```

---

## ▶️ Usage

Every program is self-contained — pick any `.cpp` file from a folder, compile
it, and run it directly.

```bash
Enter any 5 Array Elements: 4 7 2 9 1

All Even Array Elements are: 4 2
```

```bash
Enter Total Vertices: 4
Enter Total Edges: 3
Enter Source and Destination: 1 2
...

BFS Traversal: 1 2 3 4
```

---

## 📁 File Naming Convention

- Each `.cpp` file name **describes the exact concept it implements** (e.g. `Conversion_Of_Infix_To_Postfix.cpp`, `Breadth_First_Search_BFS.cpp`)
- Every category folder has its own short `README.md`
- One program = one self-contained file — no cross-file dependencies within a category

---

## ⚠️ Common Errors

- **`conio.h` / `alloc.h` not found** → These are Turbo C-only headers; use Turbo C/DOSBox, or swap them for standard equivalents on modern compilers
- **`void main()` warning/error** → Some modern compilers require `int main()`; change the signature if compiling outside Turbo C
- **Segmentation fault in Linked List/Tree programs** → Usually caused by not initializing the list/tree pointer to `NULL` before the first operation

---

## 🌟 Future Enhancements

- Port Turbo C-specific programs to standard, modern C (portable across compilers)
- Add time & space complexity notes to each program
- Add sample input/output for every file
- Cover additional topics: Hashing, AVL/Red-Black Trees, Dynamic Programming
- Add a Makefile for one-command compilation of all programs

---

## ⚠️ Disclaimer

> This project is intended for **educational and academic learning purposes only**.

> Programs are written for concept clarity, not for production use — error handling, input validation, and portability are kept minimal by design.

---

## 🪪 Author

> **Creator: Shakal Bhau**

> **GitHub: [ShakalBhau0001](https://github.com/ShakalBhau0001)**

---

## ⭐ Support

If you like this project, consider giving it a ⭐ on GitHub!

---
