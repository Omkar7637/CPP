# Topic 03 - Arrays, Strings, and Pointers (Theory)

## Core concepts
- Array memory layout and indexing
- String as null-terminated `char` array
- Pointer declaration and dereference
- Pointer arithmetic and bounds safety
- Relation between arrays and pointers

## Interview depth points
- `arr[i]` is syntactic sugar for `*(arr + i)`
- Array name is not a modifiable pointer
- Difference between `char str[] = "abc"` and `char *str = "abc"`
- Why out-of-bounds access is undefined behavior
- Why `sizeof(arr)` differs from `sizeof(ptr)`
