# Topic 01 - C Fundamentals

## What you must master

- Basic C program structure
- `main()` and return codes
- Input/Output using `printf` and `scanf`
- Data types and format specifiers
- Operators and precedence
- Type casting

## 1) Basic Program Structure

Typical C file:

- `#include <stdio.h>` imports I/O declarations.
- `int main(void)` is the program entry point.
- `return 0;` means successful execution.

## 2) Data Types (Interview basics)

- `char` (usually 1 byte)
- `int` (commonly 4 bytes)
- `float` (4 bytes)
- `double` (8 bytes)

Important: exact sizes are implementation-defined, so use `sizeof(type)` in code if needed.

## 3) Input/Output essentials

- `printf("value = %d\n", x);`
- `scanf("%d", &x);`

Common mistake: forgetting `&` in `scanf` for non-array variables.

## 4) Operators

- Arithmetic: `+ - * / %`
- Comparison: `== != > < >= <=`
- Logical: `&& || !`
- Assignment: `= += -= *= /= %=`

## 5) Precedence and Associativity

Never rely on memory only in interviews.  
Use parentheses for clarity:

- `a + b * c` means `a + (b * c)`
- `(a + b) * c` is explicitly different

## 6) Type Casting

- Implicit cast can lose precision.
- Explicit cast is safer and clearer:
  - `(double)sum / count`

## Interview Notes

- Be ready to explain integer division:
  - `5 / 2 = 2` in integer math.
- Be ready to explain why `%` works only with integers.
- Be ready to explain format mismatch bugs in `printf`/`scanf`.
