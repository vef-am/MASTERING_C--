# MASTERING_C++

![C++](https://img.shields.io/badge/C%2B%2B-17%2B-blue.svg) ![Status](https://img.shields.io/badge/Status-Learning%20Project-success.svg) ![Scope](https://img.shields.io/badge/Scope-My%20Code%20Only-orange.svg) ![License](https://img.shields.io/badge/License-Learning%20Purpose%20Only-lightgrey.svg)

Compact, recruiter-friendly summary of a personal C++ learning repository. Contains concise, well-documented practice exercises and incremental improvements made while following a C++ course.

## About

This repository holds my personal C++ practice code. The exercises in my_code/ are my own rewrites and extensions of lesson examples, demonstrating progressive improvement in code quality, error handling, and design.

Current progress: lesson 16 — "Return functions in C++".

I keep the instructor's reference files privately in not-relevant/ for offline comparison; only my_code/ is intended for public review.

## Highlights

- Personal rewrites: exercises are reimplemented in my own style rather than copied verbatim.
- Core fundamentals: control flow, functions, exceptions, I/O, and basic type handling.
- Practical improvements: safer input handling, explicit casting, human-friendly boolean/numeric output, and modular code.
- Project hygiene: build `Makefile`, focused `README`, and private course assets excluded via `.gitignore`.

## What I learned

This repository focuses on C++ fundamentals, especially:

- basic input and output
- variables and type conversion
- arithmetic, comparison, and logical operators
- `if / else` and `switch`
- `for`, `while`, and `do / while`
- simple functions and returning values
- exceptions and input validation
- `typeid` / type information experiments

Some of the code in `my_code/` goes beyond the original lesson examples because I added things I already knew or looked up on my own, such as explicit casts, safer input handling, `std::boolalpha`, and extra menu/pattern logic.

I also wrote functions before lesson 16. For example, `if_else_switch.cpp` was created around lesson 9, before the course reached lesson 16.

## Lesson outline

Covered (lessons 1–16):

1. Introduction
2. Key differences between C and C++ language
3. Source Codes
4. Anatomy of the C++ language
5. Data storage through C++ variables
6. Data Types in C++
7. Operators in C++
8. C++ Flow Control
9. Understand if-else statement by using activities & switch statement
10. While Loop
11. For loop and nested for loops
12. do-while loop
13. Break statement, continue and goto statement
14. Functions in C++ PART I
15. Functions in C++ PART II
16. Return functions in C++

Planned / upcoming (lessons 17–40):

17. Array
18. Modify & delete any item from an array
19. Sorting & reversing an array
20. Shifting an array
21. Concatenation of an array
22. Slicing and splicing arrays
23. Pointers & its declaration
24. Pointer manipulation and pointers and functions
25. Dynamic memory allocation & Dynamic array
26. 2D array, its syntax & printing
27. 2D Array with user input
28. 2D Dynamic & jagged Array
29. File Handling & Opening a File
30. Write & read a file
31. Structures in C++
32. Classes in C++, & Objects of Classes in C++
33. Functions in the classes
34. Inheritance in classes in C++
35. Polymorphism in classes in C++
36. Encapsulation and abstraction in classes in C++
37. Data structures & Basic operations
38. Linked list & its coding
39. Stacks and queues data structure in C++
40. BONUS Section - Don't Miss Out

- Code in `my_code/` is a personal rewrite and extension of lesson examples.
- I did not paste instructor files into the public repo; original course files are kept locally in `not-relevant/`.
- I added behavior and safety checks, improved formatting, modularized logic, and applied small engineering practices that reflect independent choices.

## Why this counts as a personal project

- Reimplementation: I rethought and rewrote lesson examples rather than publishing instructor source files.
- Engineering choices: consistent header hygiene, no global `using namespace std;`, const-correctness, and selective use of STL show deliberate design decisions.
- Documented improvements: validation, exceptions, and clearer output make the code easier to test and discuss during interviews.
- Code in `my_code/` is a personal rewrite and extension of lesson examples.
- I did not paste instructor files into the public repo; original course files are kept locally in `not-relevant/`.
- I added behavior and safety checks, improved formatting, modularized logic, and applied small engineering practices that reflect independent choices.


## Global improvements vs course examples

Across the `my_code/` exercises I applied consistent, practical improvements that upgrade minimal instructor examples into portfolio-ready practice code. Key themes:

- Header hygiene: explicit standard headers per file (no reliance on transitive includes).
- No global `using namespace std;`: uses `std::` or selective `using` to avoid namespace leakage.
- Robust input: validate and sanitize `std::cin` on error, use `ignore()` to avoid stuck input state.
- Exceptions & clear failure semantics: validation throws `std::invalid_argument`; `main()` handles failures and returns non-zero status.
- Modern C++: `std::vector`, const-correct references, `std::size_t` / range-based loops, and STL algorithms when appropriate.
- Clear output: `std::boolalpha`, `std::fixed`/`std::setprecision` for predictable formatting.
- Modularity: functions are small, single-purpose, and easier to test.
- Project polish: `Makefile`, README, and an explicit upload scope make the repo presentable to reviewers.

These choices are small individually but together show independent thinking and code quality improvements recruiters can discuss during interviews.


## Repository structure

Public practice and private course assets are separated:

- [my_code](my_code/) — personal rewritten exercises and experiments (intended for public upload).
- [my_code/Makefile](my_code/Makefile) — helper for compiling the exercises.
- [not-relevant](not-relevant/) — local-only, excluded by `.gitignore` (may contain private course files and larger projects).

New `.cpp` files are added to `my_code/` as I finish lessons; this README is updated incrementally to reflect progress.

Inside `my_code/` you will find:

- `functions.cpp` - percentage calculation and grading logic (lesson 16).
- `break_continue_goto.cpp` - loop and control-flow practice (lesson 13).
- `gettypeinfo.cpp` - type inspection and numeric conversion practice (lesson 6).
- `if_else_switch.cpp` - branching, exceptions, and interactive input practice (lesson 9).
- `operators.cpp` - arithmetic, comparison, logical, and assignment operator practice (lesson 7).
- `while_for.cpp` - loop-based pattern printing and exception handling practice (lesson 11).

**Per-file comparisons:** detailed, per-file comparisons and notes have been moved to `my_code/notes/` to keep this README concise. See `my_code/notes/` for per-file origins and improvement notes (examples: `functions.md`, `if_else_switch.md`, `operators.md`, etc.).

## Getting started (run locally)

### Prerequisites

- A C++17-compatible compiler such as `g++`.
- `make` if you want to use the `Makefile`.

### Build with the Makefile

From the `my_code/` folder, this builds all current exercises into `.out` files. I use `.out` on purpose so the build outputs are easy to filter in `.gitignore`:

```bash
make executables
make clean
```

### Build individual files manually

```bash
g++ -std=c++17 my_code/functions.cpp -o my_code/functions.out
g++ -std=c++17 my_code/break_continue_goto.cpp -o my_code/break_continue_goto.out
g++ -std=c++17 my_code/gettypeinfo.cpp -o my_code/gettypeinfo.out
g++ -std=c++17 my_code/if_else_switch.cpp -o my_code/if_else_switch.out
g++ -std=c++17 my_code/operators.cpp -o my_code/operators.out
g++ -std=c++17 my_code/while_for.cpp -o my_code/while_for.out
```



## Notes

- `not-relevant/` is excluded from public upload and may contain private instructor files used only for offline comparison.
- As I add new exercises, I will include them under `my_code/` and update this README with a short note describing key improvements.



## Upload scope

Publish only `my_code/`. Keep `not-relevant/` private. Contact me if you need a guided walkthrough of the code or a short summary suitable for recruiters.

## License

See the root `LICENSE` file for the current usage restrictions.
