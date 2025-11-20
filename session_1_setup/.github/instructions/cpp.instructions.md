---
applyTo: "**/*.{cpp,cc,cxx,h,hpp,hh}"
---

Project context

- Codebase uses modern C++ for performance- and safety-sensitive components. Built with CMake; CI runs format, lint, build, and unit tests.
- Public headers define stable APIs; implementation files hold business logic.

Coding guidelines (for generation, answers, and reviews)

- Target standard: use C++17 (or project-specified standard). Prefer constexpr and noexcept where appropriate.
- Formatting & tools: follow the repository's clang-format and clang-tidy configs. Run these in CI.
- Headers:
  - Use #pragma once or include guards.
  - Minimize includes in headers; prefer forward declarations.
  - Keep headers focused: declare interfaces, avoid heavy implementation.
- Ownership & resource safety:
  - Prefer RAII and standard library types (std::unique_ptr, std::shared_ptr only when shared ownership is needed).
  - Avoid raw owning new/delete; use smart pointers or stack objects.
  - Ensure no leaks, UB, or data races; prefer immutable state and const-correctness.
- APIs & naming:
  - Follow existing project naming conventions; if none, use clear, descriptive names and consistent casing.
  - Keep public APIs stable and well-documented (Doxygen-style comments for public types/functions).
- Performance & correctness:
  - Prefer standard algorithms and expressive STL usage over manual loops when appropriate.
  - Optimize only when needed; prefer clarity first.
  - Avoid premature micro-optimizations that reduce readability.
- Error handling:
  - Prefer exceptions for error propagation unless project uses another pattern; use std::optional for optional results and std::variant/expected for richer outcomes.
  - Always validate inputs and provide clear error messages.
- Includes and build:
  - Include the narrowest header needed; avoid transitive includes in public headers.
  - Keep compile-time and binary size considerations in mind.
- Concurrency:
  - Make thread-safety explicit in APIs; document locking requirements.
  - Prefer lock-free or minimal-lock designs only when measured beneficial.
- Tests & CI:
  - Add unit tests for new behavior (use the project's test framework, e.g. GoogleTest).
  - Ensure new code is covered by CI, including formatting and static analysis checks.
- Review checklist (when generating or reviewing diffs):
  - Compiles cleanly and passes unit tests.
  - Matches style and formatting.
  - Correct ownership and lifetime handling.
  - Clear and minimal public API surface.
  - Proper error handling and input validation.
  - Adequate tests and documentation/comments.

When generating code: produce compilable, minimal examples that follow these rules; note any assumptions (C++ standard, required libraries, missing project files) and include quick usage or test snippets where helpful.
