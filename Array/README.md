# 🔢 Array 📊

A collection of **Array-based programs in C** covering array creation, traversal,
insertion, deletion, reversal, element filtering, and **2D matrix operations**.
Built for **academic learning** and **lab exam practice** — one concept, one file.

---

## 🧱 Folder Structure

```bash
Array/
│
├── Static_Array.cpp            # Menu-driven static array operations
├── Even_Array.cpp              # Print even elements of an array
├── Odd_Array.cpp               # Print odd elements of an array
├── MinMax_Array.cpp            # Max / Min element display
├── Matrix_Addition.cpp         # Add two 3x3 matrices
├── Matrix_Subtraction.cpp      # Subtract two 3x3 matrices
├── Matrix_Multiplication.cpp   # Multiply two 3x3 matrices
└── README.md                   # Folder documentation
```

---

## ✨ Programs

| Program                       | Description                                                       |
| ----------------------------- | ----------------------------------------------------------------- |
| **Static_Array.cpp**          | Menu-driven: Insert, Delete (by position), Display, Reverse, Exit |
| **Even_Array.cpp**            | Reads 5 elements and prints all even elements                     |
| **Odd_Array.cpp**             | Reads 5 elements and prints all odd elements                      |
| **MinMax_Array.cpp**          | Reads 5 elements and displays the "Max" and "Min" element groups  |
| **Matrix_Addition.cpp**       | Reads two 3×3 matrices and prints their sum                       |
| **Matrix_Subtraction.cpp**    | Reads two 3×3 matrices and prints their difference                |
| **Matrix_Multiplication.cpp** | Reads two 3×3 matrices and prints their product                   |

---

## 🛠 Concepts Covered

- 1D arrays: input, traversal, conditional filtering
- Static array with a fixed capacity (`#define n 10`) and a running element count
- Insertion / deletion with element shifting
- In-place array reversal
- 2D arrays (3×3 matrices) and nested loops
- Modular programming using user-defined functions (`insert`, `remove`, `traverse`, `reverse`)

---

## ▶️ How to Run

```bash
tcc Static_Array.cpp
Static_Array.exe
```

> ℹ️ These programs use Turbo C-style headers (`conio.h`, `process.h`) and `void main()`.
> Use **Turbo C / DOSBox**, or replace `clrscr()`/`getch()` with modern equivalents to compile on newer compilers.

---

## ▶️ Sample Usage

```bash
1:Insert
2:Delete
3:Display
4:Reverse
5:Exit

Enter your choice: 1
Enter val to insert= 25
```

```bash
Enter any 5 Array Elements: 4 7 2 9 1

All Even Array Elements are: 4 2
```

---

## ⚠️ Common Errors

- **Array overflow** → `Static_Array.cpp` has a fixed size of 10; inserting beyond it is not possible
- **Invalid delete position** → Prints "Delete operation not performed"
- **`conio.h` not found** → Turbo C-only header; use Turbo C/DOSBox or remove `clrscr()`/`getch()`

---

## 🌟 Future Enhancements

- Take the array size as user input instead of a fixed `#define`
- Support N×M matrices with dimension checks
- Add sorting and searching programs (Bubble Sort, Binary Search)

---

## 🪪 Author

> **Creator: Shakal Bhau**

> **GitHub: [ShakalBhau0001](https://github.com/ShakalBhau0001)**

---
