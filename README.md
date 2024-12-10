# Null Pointer Dereference Bug in C++

This repository demonstrates a common C++ error: dereferencing a null pointer.  The `bug.cpp` file contains the faulty code, while `bugSolution.cpp` provides a corrected version.

**Problem:**
The original code attempts to assign a value to a memory location pointed to by a null pointer. This leads to undefined behavior, typically resulting in a program crash.

**Solution:**
The corrected code checks for a null pointer before attempting to dereference it, preventing the crash.

This example highlights the importance of pointer safety in C++ programming.