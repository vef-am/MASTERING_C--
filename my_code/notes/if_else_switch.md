# if_else_switch.cpp — origins & improvements

- File: `my_code/if_else_switch.cpp`

Summary

Lecture examples for branching are short and rely on `using namespace std;` and basic prompts. This file refactors the patterns into safer, more explicit code.

What was added or improved (file-specific)

- Added headers (`<string>`, `<cctype>`, `<stdexcept>`, `<limits>`) for explicit dependency management.
- Replaced raw `tolower()` calls with `std::tolower(static_cast<unsigned char>(...))` for defined behavior.
- Improved `std::cin` validation (clear + ignore) to handle invalid user input gracefully.

Why this demonstrates personal work

These changes show attention to C++ edge cases and portability that are usually omitted from brief lecture demos.
