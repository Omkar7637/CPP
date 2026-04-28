# Topic 04 - Memory Management and UB (Theory)

## Core concepts
- Stack vs heap
- `malloc`, `calloc`, `realloc`, `free`
- Dangling, wild, null pointers
- Memory leaks and double free
- Undefined behavior patterns

## Interview depth points
- `malloc` gives uninitialized memory; `calloc` zero-initializes
- `realloc` may move memory; always use temporary pointer pattern
- Using memory after `free` is UB
- Signed integer overflow is UB in C
