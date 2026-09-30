# 📤 Queue 🚶

A collection of **Queue (FIFO) programs in C** — **Linear Queue**, **Circular Queue**, **Priority Queue**, and both types of **Deque**(Input-Restricted & Output-Restricted).

All programs are **menu-driven** and built for **academic learning** and **lab exam practice**.

---

## 🧱 Folder Structure

```bash
Queue/
│
├── Linear_Queue.cpp              # Simple array-based queue
├── Circular_Queue.cpp            # Circular array-based queue
├── Priority_Queue.cpp            # Queue with priorities
├── Input_Restricted_Deque.cpp    # Insert at one end, remove from both
├── Output_Restricted_Deque.cpp   # Insert at both ends, remove from one
└── README.md                     # Folder documentation
```

---

## ✨ Programs

| Program                         | Menu Operations                                          |
| ------------------------------- | -------------------------------------------------------- |
| **Linear_Queue.cpp**            | Create, IsEmpty, IsFull, Insert, Remove, Display, Exit   |
| **Circular_Queue.cpp**          | Create, IsEmpty, IsFull, Insert, Remove, Display, Exit   |
| **Priority_Queue.cpp**          | Create, Insert (value + priority), Remove, Display, Exit |
| **Input_Restricted_Deque.cpp**  | Create, Insert, Remove Left, Remove Right, Display, Exit |
| **Output_Restricted_Deque.cpp** | Create, Insert Right, Insert Left, Remove, Display, Exit |

---

## 🛠 Concepts Covered

- FIFO principle with `front` and `rear` pointers
- Queue overflow & underflow detection (`#define max 5`)
- Circular indexing to reuse freed space in a circular queue
- Priority-based insertion and removal using a parallel `prio[]` array
- Double-ended queue (deque) with `left` / `right` ends
- Difference between input-restricted and output-restricted deques

---

## 🔍 Queue Types at a Glance

| Type                        | Insert              | Remove               |
| --------------------------- | ------------------- | -------------------- |
| **Linear Queue**            | Rear                | Front                |
| **Circular Queue**          | Rear (wraps around) | Front (wraps around) |
| **Priority Queue**          | With a priority     | By priority          |
| **Input-Restricted Deque**  | One end only        | Both ends            |
| **Output-Restricted Deque** | Both ends           | One end only         |

---

## ▶️ How to Run

```bash
tcc Circular_Queue.cpp
Circular_Queue.exe
```

> ℹ️ These programs use Turbo C-style headers (`conio.h`, `process.h`) and `void main()`.
> Use **Turbo C / DOSBox**, or replace `clrscr()`/`getch()` with modern equivalents for newer compilers.

---

## ▶️ Sample Usage

```bash
1:Create
2:IsEmpty
3:IsFull
4:Insert
5:Remove
6:Display
7:Exit

Enter Your Choice= 4
Enter Insert Val= 30
Element is Pushed
```

```bash
Enter Insert Val:-> 50
Enter Priority Val:-> 2
Element Is Inserted....
```

---

## ⚠️ Common Errors

- **Queue Overflow** → Inserting when the queue is full (capacity is 5 by default)
- **Queue Underflow** → Removing from an empty queue
- **Operation before Create** → Always choose `Create` first to initialize the queue
- **`conio.h` not found** → Turbo C-only header; use Turbo C/DOSBox

---

## 🌟 Future Enhancements

- Take queue capacity as user input
- Priority Queue using a heap for O(log n) operations
- Add queue-using-two-stacks and stack-using-two-queues programs

---

## 🪪 Author

> **Creator: Shakal Bhau**

> **GitHub: [ShakalBhau0001](https://github.com/ShakalBhau0001)**

---
