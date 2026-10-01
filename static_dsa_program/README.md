# 🧩 Static DSA Program 🎯

A collection of **small, standalone practice programs** in C/C++ — classic
beginner-to-interview problems like **Two Sum**, **Palindrome Number**, and
**Swapping without a third variable**. Unlike the other folders, these programs
use **standard headers only** (no Turbo C-specific code), so they compile on any
modern compiler.

---

## 🧱 Folder Structure

```bash
static_dsa_program/
│
├── two_sum.cpp         # Two Sum
├── palindrome.cpp      # Palindrome number check
├── swap_2_nums.cpp     # Swap two numbers using XOR
├── single_number.cpp   # Single Number problem
└── README.md           # Folder documentation
```

---

## ✨ Programs

| Program               | Description                                                            | Approach                        |
| --------------------- | ---------------------------------------------------------------------- | ------------------------------- |
| **two_sum.cpp**       | Finds indices of two numbers in an array that add up to a target       | Brute force (nested loops)      |
| **palindrome.cpp**    | Checks whether an entered number reads the same forwards and backwards | Digit reversal with `%` and `/` |
| **swap_2_nums.cpp**   | Swaps two numbers without using a third variable                       | XOR (`^`) operator              |
| **single_number.cpp** | Single Number problem                                                  | 🚧 To be implemented            |

> 🔗 Two Sum reference: [LeetCode — Two Sum](https://leetcode.com/problems/two-sum)
> 🔗 Single Number reference: [LeetCode — Single Number](https://leetcode.com/problems/single-number)

---

## 🛠 Concepts Covered

- Nested loops and array traversal
- Digit extraction using modulus and division
- Bitwise XOR for in-place value swapping
- Basic input/output using `scanf/printf` (C) and `cin/cout` (C++)

---

## ▶️ How to Run

```bash
gcc two_sum.cpp -o two_sum
./two_sum
```

```bash
gcc palindrome.cpp -o palindrome
./palindrome
```

```bash
g++ swap_2_nums.cpp -o swap_2_nums
./swap_2_nums
```

> ℹ️ `swap_2_nums.cpp` uses `<iostream>` so compile it with **g++**; the others use `<stdio.h>` and compile with gcc or g++.

---

## ▶️ Sample Usage

```bash
Enter A Number: 121
Number Is Palindrome
```

```bash
Enter 1st Number:
5
Enter 2nd Number:
9
Before Swap:
5 9After Swap: 9 5
```

```bash
# two_sum.cpp  →  nums = {2, 7, 11, 15}, target = 9
0,1
```

---

## ⚠️ Common Errors

- **Two Sum prints multiple pairs** → Brute force prints every matching pair; add a `return` after the first match if only one is needed
- **Negative palindrome input** → `palindrome.cpp` only handles positive numbers (`while(num>0)`)
- **No newline in output** → `swap_2_nums.cpp` prints "Before" and "After" results on the same line; add `endl` for cleaner output

---

## 🌟 Future Enhancements

- Implement `single_number.cpp` (XOR-based O(n) solution)
- Optimize Two Sum using a hash map for O(n) time
- Add more classics: Fibonacci, Prime check, Armstrong number, Reverse array
- Add time & space complexity notes to each solution

---

## 🪪 Author

> **Creator: Shakal Bhau**

> **GitHub: [ShakalBhau0001](https://github.com/ShakalBhau0001)**

---
