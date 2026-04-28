# Topic 02 - Theory (Control Flow and Functions)

## 1) if / else

Use when decision depends on conditions.

Example:
- if marks >= 40 -> pass
- else -> fail

Interview point:
- Prefer clear boolean expressions.
- Avoid deeply nested if blocks when possible.

## 2) else-if ladder

Use when there are multiple ranges or categories.

Common use:
- grading system
- tax slab
- classification logic

## 3) switch-case

Use when comparing one variable against fixed constant values.

Rules:
- `case` labels must be compile-time constants.
- `break` prevents fall-through.
- `default` handles unknown input.

Interview point:
- Missing `break` is a classic bug unless intentional.

## 4) Loops

### for loop
- best when iteration count is known.

### while loop
- best when condition-driven iteration.

### do-while loop
- executes body at least once.

Interview point:
- infinite loops happen when update step is missing.

## 5) break and continue

- `break` exits loop immediately.
- `continue` skips current iteration and moves to next.

Use carefully for readability.

## 6) Functions in C

Structure:
- declaration (prototype)
- definition
- call

Why functions:
- reuse
- testability
- smaller logical blocks

## 7) Pass-by-value in C

C passes arguments by value.
Function gets a copy, not original variable.

To modify original data:
- pass pointer to function.

## 8) Recursion basics

Recursion = function calls itself.

Must have:
- base case
- recursive case that moves toward base case

Interview point:
- missing base case causes stack overflow.
