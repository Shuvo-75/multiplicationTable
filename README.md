# 📚 Multiplication Table Generator

A simple C++ console application that generates the multiplication table of a user-provided number. I built this project to practice C++ functions, loops, input validation, and basic program structure.

The program accepts a number between **1 and 100**, validates the input, and prints its multiplication table from **1 to 10**.

---

## ✨ Features

* Generate multiplication tables from 1 to 100
* Input validation for invalid or non-numeric values
* Clean and beginner-friendly console interface
* Modular code using separate functions

---

## 🛠 Technologies Used

* C++
* Standard Library

  * `iostream`
  * `limits`

---

## 📂 Project Structure

```text
multiplicationTable/
├── main.cpp
└── README.md
```

---

## 📚 Concepts Practiced

* Functions
* Loops (`for`)
* Input validation
* Error handling
* `numeric_limits`
* Console I/O

---

## 🔄 Program Workflow

```text
Start
   │
   ▼
Ask user for a number
   │
   ▼
Is the input valid?
   │
   ├── No
   │      │
   │      ▼
   │ Show error message
   │      │
   │      └── Ask again
   │
   └── Yes
          │
          ▼
Generate multiplication table
          │
          ▼
Display result
          │
          ▼
         End
```

---

## 💻 Example Output

```text
Enter a number from 1 to 100: 7

Here is Multiplication Table

7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
```

Example of invalid input:

```text
Enter a number from 1 to 100: abc

[!] Fatal Error: That is not a valid number. Try again.
```

---

## 🚀 Getting Started

Clone the repository:

```bash
git clone https://github.com/Shuvo-75/multiplicationTable.git
cd multiplicationTable
```

Compile:

```bash
g++ main.cpp -o multiplicationTable
```

Run:

```bash
./multiplicationTable
```

---

## 🚧 Future Improvements

* Allow users to generate multiple tables without restarting the program
* Let users choose the table range (e.g., up to 20 or 50)
* Print tables for multiple numbers at once
* Save the output to a text file
* Add a menu-driven interface

---

## 👨‍💻 About This Project

I'm currently learning C++, and this is one of the projects I built for practice. It's a simple but useful application that helped me apply the concepts I've been studying in a real program.

As I continue learning, I might come back to this project and add new features or improve the code. For now, it represents my current understanding of C++.
