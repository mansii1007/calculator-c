# Simple Calculator in C

A menu-driven console calculator built using the C programming language.
It allows users to perform basic arithmetic operations and power calculations.

## How it works

- The program displays a menu of operations.
- The user selects an operation by entering a number (1–7).
- The user enters two numbers.
- The calculator performs the selected operation and displays the result.
- The program continues until the user selects Exit.

## Features

- Addition
- Subtraction
- Multiplication
- Division (with a divide-by-zero check)
- Modulus
- Power calculation
- Runs until you choose Exit

## How to run

```bash
gcc simple_calculator.c -o calculator -lm
./calculator
```

The `-lm` flag is needed for the power function from `math.h`.

## Tech stack

C language · `math.h`
