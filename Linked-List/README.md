# 🔗 Linked-List 🧬

A collection of **Linked List programs in C** — Singly & Doubly, Linear & Circular —
plus a **Dynamic Stack** and **Dynamic Queue** built on top of linked lists.
Every program is **menu-driven**, uses **dynamic memory allocation**, and is built
for **academic learning** and **lab exam practice**.

---

## 🧱 Folder Structure

```bash
Linked-List/
│
├── Singly_Linear.cpp      # Singly Linear Linked List
├── Singly_Circular.cpp    # Singly Circular Linked List
├── Doubly_Linear.cpp      # Doubly Linear Linked List
├── Doubly_Circular.cpp    # Doubly Circular Linked List
├── Dynamic_Stack.cpp      # Stack using Linked List
├── Dynamic_Queue.cpp      # Queue using Linked List
└── README.md              # Folder documentation
```

---

## ✨ Programs

| Program                 | Description                                                     |
| ----------------------- | --------------------------------------------------------------- |
| **Singly_Linear.cpp**   | Singly linked list with full insert/remove/search/count/reverse |
| **Singly_Circular.cpp** | Singly circular linked list with the same operation set         |
| **Doubly_Linear.cpp**   | Doubly linked list (`prev` + `next` pointers)                   |
| **Doubly_Circular.cpp** | Doubly circular linked list                                     |
| **Dynamic_Stack.cpp**   | LIFO stack: IsEmpty, Push, Pop, Display                         |
| **Dynamic_Queue.cpp**   | FIFO queue: IsEmpty, Insert, Remove, Display                    |

### 📋 Menu Operations (all four list programs)

```bash
1:Insert Begin        7:Search
2:Insert End          8:Count
3:Insert Between      9:Reverse
4:Remove Begin       10:Display
5:Remove End         11:Exit
6:Remove Between
```

---

## 🛠 Concepts Covered

- Self-referential `struct node` and dynamic allocation (via `alloc.h`)
- Linear vs Circular traversal and termination conditions
- Singly vs Doubly linking (`next` only vs `prev` + `next`)
- Insert/remove at beginning, end, and after a given node
- Searching, counting, and in-place reversal of a list
- Stack (LIFO) and Queue (FIFO) implemented with linked nodes — no fixed capacity

---

## ▶️ How to Run

```bash
tcc Singly_Linear.cpp
Singly_Linear.exe
```

> ℹ️ These programs use Turbo C-style headers (`conio.h`, `alloc.h`, `process.h`).
> Use **Turbo C / DOSBox**, or replace `alloc.h` with `<stdlib.h>` and remove `clrscr()`/`getch()` for modern compilers.

---

## ▶️ Sample Usage

```bash
1:Insert Begin
2:Insert End
...
11:Exit

Enter Choice: 1
Enter Val Insert Begin= 10
Node is Inserted
```

```bash
1:IsEmpty
2:Push
3:Pop
4:Display
5:Exit

Enter Your Choice= 2
Enter Push Val= 42
Element Pushed
```

---

## ⚠️ Common Errors

- **"Linked List is Empty"** → Remove/Display attempted before any insertion
- **"Insert Between Not Possible"** → The "after which node" value doesn't exist in the list
- **Stack/Queue Underflow** → Pop/Remove on an empty dynamic stack or queue
- **`alloc.h` not found** → Turbo C-only header; use `<stdlib.h>` on modern compilers

---

## 🌟 Future Enhancements

- Free (`free()`) all nodes on exit to avoid memory leaks
- Insert/remove by position index
- Add sorted insertion and duplicate removal
- Add linked-list based Polynomial addition

---

## 🪪 Author

> **Creator: Shakal Bhau**

> **GitHub: [ShakalBhau0001](https://github.com/ShakalBhau0001)**

---
