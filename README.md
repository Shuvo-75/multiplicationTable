# multiplicationTable
A C++ multiplication table generator with smart error handling to prevent crashes and infinite loops

# C++ CLI Multiplier

## Overview
A simple command-line program written in C++ that generates multiplication tables. The main focus of this project isn't just the math, but the **error handling**. I built this to practice managing bad user input—ensuring the program doesn't crash or get stuck in an infinite loop if a user types a letter instead of a number.

## Core Features
* **Smart Error Handling:** If you type a word (like "apple") instead of a number, the program catches the error, clears the input buffer, and safely asks again instead of crashing.
* **Strict Number Checking:** It only accepts numbers between 1 and 100. Anything higher, lower, or negative is rejected.
* **Clean Loops:** Uses a `while` loop to keep the program running smoothly until the user provides the correct input.
* **Pure C++:** Written using only standard C++ libraries (`<iostream>`, `<limits>`) with no complicated setups or external dependencies required.

## Compilation and Execution

### Prerequisites
A standard C++ compiler (such as GCC or Clang) must be installed on your local machine.

### Installation
1. Clone the repository and navigate to the project directory:
   ```bash
   git clone [https://github.com/Shuvo-75/multiplicationTable.git](https://github.com/Shuvo-75/multiplicationTable.git)
   cd multiplicationTable

2. Compile the source code:

```bash
g++ main.cpp -o multiplier
