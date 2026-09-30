# 📥 Stack 🥞

A collection of **Stack (LIFO) programs in C** — from a basic **static stack** to classic stack applications like **infix/postfix/prefix conversion**,
**postfix evaluation**, **balanced-bracket checking**, and **string processing**. Built for **academic learning** and **lab exam practice**.

---

## 🧱 Folder Structure

```bash
Stack/
│
├── Static_Stack.cpp                              # Menu-driven array-based stack
├── Conversion_Of_Infix_To_Postfix.cpp            # Infix → Postfix
├── Conversion_Of_Infix_To_Prefix.cpp             # Infix → Prefix
├── Evaluation_Of_Postfix_Expression.cpp          # Evaluate a postfix expression
├── Expression_Valid_Or_Not.cpp                   # Balanced bracket checker
├── Decimal_To_Binary_Conversion_Using_Stack.cpp  # Decimal → Binary
├── Count_Vowels_Using_Stack.cpp                  # Count vowels in a string
├── Palindrome_String_Using_Stack.cpp             # Palindrome string check
├── Reverse_String_Using_Stack.cpp                # Reverse a string
└── README.md                                     # Folder documentation
```

---

## ✨ Programs

| Program                                          | Description                                                       |
| ------------------------------------------------ | ----------------------------------------------------------------- |
| **Static_Stack.cpp**                             | Create, IsEmpty, IsFull, Push, Pop, Display, Exit                 |
| **Conversion_Of_Infix_To_Postfix.cpp**           | Converts an infix expression to postfix using operator precedence |
| **Conversion_Of_Infix_To_Prefix.cpp**            | Converts an infix expression to prefix                            |
| **Evaluation_Of_Postfix_Expression.cpp**         | Evaluates a postfix expression using an operand stack             |
| **Expression_Valid_Or_Not.cpp**                  | Checks `()`, `[]`, `{}` are balanced and correctly matched        |
| **Decimal_To_Binary_Conversion_Using_Stack.cpp** | Converts a decimal number to binary by stacking remainders        |
| **Count_Vowels_Using_Stack.cpp**                 | Pushes characters and counts vowels                               |
| **Palindrome_String_Using_Stack.cpp**            | Compares a string with its stack-reversed version                 |
| **Reverse_String_Using_Stack.cpp**               | Reverses a string using push/pop                                  |

---

## 🛠 Concepts Covered

- LIFO principle with `push`, `pop`, and a `top` pointer
- Stack overflow and underflow handling (fixed capacity `max = 50`)
- Operator precedence in expression conversion
- Postfix evaluation using an operand stack
- Bracket matching for `()`, `[]`, `{}`
- Using a stack to reverse data (strings, binary remainders)

---

## ▶️ How to Run

```bash
tcc Conversion_Of_Infix_To_Postfix.cpp
Conversion_Of_Infix_To_Postfix.exe
```

> ℹ️ These programs use Turbo C-style headers (`conio.h`) and `void main()`.
> Use **Turbo C / DOSBox**, or replace `clrscr()`/`getch()` with modern equivalents for newer compilers.

---

## ▶️ Sample Usage

```bash
1:Create
2:Isempty
3:Isfull
4:Push
5:Pop
6:Display
7:Exit

Enter your choise: 4
Enter value to push= 15
15 is pushed
```

```bash
Enter any Infix Expression: (A+B)*C
```

```bash
Enter any Postfix Expression: {[()]}
Expression is Valid.
```

---

## ⚠️ Common Errors

- **Stack Overflow** → Pushing beyond the fixed `max` capacity
- **Stack Underflow** → Popping from an empty stack (e.g. an unmatched closing bracket)
- **Long expressions/strings** → Input buffers are fixed-size (`char[50]`), so keep inputs short
- **`conio.h` not found** → Turbo C-only header; use Turbo C/DOSBox

---

## 🌟 Future Enhancements

- Use a linked-list based stack to remove fixed size limits
- Support multi-digit operands in postfix evaluation
- Add "Next Greater Element" and similar stack problems
- Add Tower of Hanoi using a stack

---

## 🪪 Author

> **Creator: Shakal Bhau**

> **GitHub: [ShakalBhau0001](https://github.com/ShakalBhau0001)**

---
