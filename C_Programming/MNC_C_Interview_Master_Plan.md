# MNC C Interview Master Plan (Qualcomm/NVIDIA/Intel/AMD)

This is a practical and deep-prep plan for someone with ~2 years of C experience targeting top product/system companies.

---

## 0) Goal and Rules

### Target
- Crack interviews that test C deeply: language internals, debugging, systems, and performance.

### Daily Rules (Non-Negotiable)
- 3 focused hours minimum on weekdays.
- 5 to 6 hours on Saturday, 3 to 4 hours on Sunday.
- Every coding solution must include:
  - Time complexity
  - Space complexity
  - Edge cases
  - Failure cases
- Solve in `C` only (avoid switching to C++).

### Weekly Output
- 1 revision sheet (max 2 pages)
- 1 mock interview recording (self or peer)
- 1 mini implementation artifact (library/module/tool)

---

## 1) 10-Week Structure

- Week 1-2: C Core Internals (Depth Refresh)
- Week 3-4: Data Structures + Memory Ownership in C
- Week 5-6: OS + Concurrency + Low-Level Concepts
- Week 7-8: Debugging + Performance Engineering
- Week 9-10: Interview Simulation + Company-Style Rounds

---

## 2) Week-by-Week Detailed Plan

## Week 1 - C Language Internals I

### Theory
- Storage duration: automatic, static, allocated
- Scope and linkage: block/file/external/internal
- Declarations vs definitions
- Header file discipline and include guards
- Preprocessing, compilation, assembly, linking

### Coding Tasks
- Write a multi-file math utility (`.h` + `.c` + `main.c`)
- Build with separate compilation steps
- Program set:
  - scope and shadowing demo
  - `static` variable/function behavior demo
  - macro pitfalls demo

### Interview Questions Practice
- Difference between declaration and definition
- What is internal linkage
- Why header guards are needed

---

## Week 2 - C Language Internals II

### Theory
- `const`, `volatile`, `restrict` in depth
- Pointer types and pointer arithmetic
- Array-to-pointer decay
- Undefined behavior (UB) categories
- Strict aliasing and alignment basics

### Coding Tasks
- Write safe string utility functions:
  - `my_strlen`, `my_strcpy`, `my_strncmp`, `my_strchr`
- Implement memory utilities:
  - `my_memcpy`, `my_memmove`, `my_memset`
- Create UB examples and explain why they are UB

### Interview Questions Practice
- Difference: `const int *p`, `int *const p`, `const int *const p`
- Why `memcpy` can fail with overlap
- What makes signed overflow UB

---

## Week 3 - DS in C I (Ownership + APIs)

### Theory
- API design in C (opaque vs exposed struct)
- Ownership model and lifecycle docs
- Error handling patterns (`return code`, `errno` style)

### Coding Tasks
- Implement dynamic array module (`vector.c/.h`)
  - init, push, pop, reserve, free
- Implement singly linked list with iterator-like traversal
- Add unit-style test driver in C

### Interview Questions Practice
- How to design safe C APIs
- How to avoid memory leaks in modular design

---

## Week 4 - DS in C II (Hashing + Queues)

### Theory
- Hashing fundamentals, collisions, load factor
- Open addressing vs chaining
- Circular buffer and queue tradeoffs

### Coding Tasks
- Implement hash map (string key, int value)
- Implement circular queue
- Add resize + rehash logic
- Add simple benchmark for insert/search/delete

### Interview Questions Practice
- How collision handling works
- Rehashing tradeoffs

---

## Week 5 - OS Foundations for C Interviews

### Theory
- Process vs thread
- Virtual memory: pages, page faults (high level)
- Stack vs heap at runtime
- Syscalls overview
- Context switching concept

### Coding Tasks
- File I/O parser utility (read, parse, aggregate)
- Process-based mini task (platform dependent; concept first)
- Memory layout inspection program

### Interview Questions Practice
- What happens when a program starts
- Why stack overflow occurs

---

## Week 6 - Concurrency and Synchronization

### Theory
- Race conditions
- Mutex, semaphore, condition variable
- Deadlock conditions and prevention
- Atomics basics and memory ordering (intro level)

### Coding Tasks
- Producer-consumer using threads + mutex + cond var
- Thread-safe queue module
- Deadlock demo and fixed version

### Interview Questions Practice
- Why race conditions happen
- How condition variable differs from mutex

---

## Week 7 - Debugging Mastery

### Theory
- Segfault root causes taxonomy
- Heap corruption patterns
- Use-after-free, double free, out-of-bounds

### Tooling
- `gdb`:
  - breakpoints, watchpoints, backtrace, frame inspection
- Sanitizers:
  - AddressSanitizer
  - UndefinedBehaviorSanitizer
- Valgrind (if available in your environment)

### Coding Tasks
- Create intentionally buggy programs, then debug and fix
- Maintain `bug_journal.md` with root-cause notes

### Interview Questions Practice
- How you would debug intermittent crash
- Difference between ASan and Valgrind

---

## Week 8 - Performance and Low-Level Thinking

### Theory
- Cache locality and data-oriented layout
- Branch prediction basics
- False sharing concept
- Cost model: algorithmic + memory + CPU behavior

### Coding Tasks
- Compare two versions of same algorithm with timing harness
- Optimize string scan / array traversal workloads
- Bit-manipulation problem set (20+ tasks)

### Interview Questions Practice
- Why contiguous memory often performs better
- Tradeoff between readability and micro-optimization

---

## Week 9 - Interview Simulation I

### Mock Round Pattern (5 days)
- 45 min coding (C only)
- 20 min bug-fix task
- 20 min systems theory viva
- 15 min retrospective notes

### Focus
- Clear thinking under time
- Verbalizing assumptions
- Recovering from mistakes quickly

---

## Week 10 - Interview Simulation II (Company Style)

### Company-Oriented Mix
- Qualcomm/Intel style: low-level C + bitwise + memory
- NVIDIA/AMD style: performance and systems reasoning

### Final Deliverables
- 1 strong C library project (clean API + tests)
- 1 debugging case study write-up
- 1 systems Q/A notebook (50 high-frequency questions)

---

## 3) Daily Template (Weekday: 3 hours)

- 45 min: theory notes (single topic)
- 90 min: implementation/problem solving in C
- 30 min: debugging/performance/tooling practice
- 15 min: write 5 interview Q/A points

## Weekend Template

- Saturday:
  - 2 mock rounds + deep review
  - 1 mini-project improvement
- Sunday:
  - weak area repair
  - revision sheet and next week planning

---

## 4) Topic Checklist (Must Master)

- Pointers, pointer arithmetic, double pointers
- Arrays vs pointers, decay behavior
- Memory allocation and deallocation discipline
- UB scenarios and safe alternatives
- Struct alignment/padding and packing implications
- Function pointers and callback patterns
- Multi-file C project architecture
- Basic concurrency primitives
- Debugging and profiling workflow

---

## 5) Problem Buckets (Solve in this order)

1. Arrays and strings (40)
2. Pointers and memory (40)
3. Linked list + stack + queue (30)
4. Hashing + bit manipulation (40)
5. Recursion + backtracking basics (20)
6. Concurrency/debugging case tasks (20)

Total target: 190 curated tasks in 10 weeks.

---

## 6) Resume + Interview Story Preparation

Prepare 4 strong stories:
- Memory bug you fixed
- Performance optimization you delivered
- C module/API you designed
- Hard production issue triaged systematically

Use STAR format and keep each story < 3 minutes.

---

## 7) Tools Setup Checklist

- Compiler warnings as errors:
  - `-Wall -Wextra -Werror -pedantic`
- Debug builds:
  - `-g -O0`
- Sanitizer builds:
  - `-fsanitize=address,undefined`
- Release-ish benchmark builds:
  - `-O2` or `-O3` (carefully compare)

---

## 8) Weekly Review Scorecard (Self-Evaluation)

Rate 1 to 5:
- C internals clarity
- Implementation quality
- Debugging speed
- Systems understanding
- Communication during mock interviews

If any category < 3 for 2 weeks, pause and repair before moving ahead.

---

## 9) Final 2-Week Sprint Before Real Interviews

- Revise all notebook Q/A pages
- Re-solve top 30 mistakes without looking at old code
- 6 full mocks (timed, strict)
- Daily 20-minute whiteboard explanation practice

---

## 10) First 7 Days Action Plan (Start Now)

Day 1:
- Setup folders, compiler flags, and notebook
- Study linkage + storage classes
- Code 3 demos

Day 2:
- `const/volatile/restrict` deep notes
- 6 pointer exercises

Day 3:
- UB deep dive
- 5 buggy snippets and fixes

Day 4:
- Multi-file project build practice
- Header guard + API discipline

Day 5:
- String/memory utility implementations
- Add test driver

Day 6:
- Debug lab with `gdb` and sanitizers
- Write bug journal entries

Day 7:
- 1 mini mock interview
- Weekly scorecard + adjust next week

---

If you follow this honestly, you will build interview depth, not just surface confidence.
