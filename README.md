#  ALX Low-Level Programming Projects

This repository contains a comprehensive collection of low-level C programming projects, designed to build a solid foundation in systems programming, data structures, memory management, and algorithmic problem-solving.

It follows a **module-based structure** that covers essential programming concepts — from the basics of outputting characters to implementing dynamic memory allocation, function pointers, and bitwise operations.

##  Project Structure

Each subdirectory is a dedicated module in the curriculum:

| Directory                       | Topic                                        |
|---------------------------------|----------------------------------------------|
| 0x00-hello_world                | Intro to C compilation & standard output     |
| 0x01-variables_if_else_while    | Control structures, randomization            |
| 0x02-functions_nested_loops     | Looping and function creation                |
| 0x03-debugging                  | Debugging tools and techniques               |
| 0x04-more_functions_nested_loops| Logical operations and validation            |
| 0x05/0x06/0x07                  | Pointers, arrays, strings, and memory        |
| 0x08-recursion                  | Recursive functions and call stacks          |
| 0x09-static_libraries           | Creating and using static libraries          |
| 0x0A-argc_argv                  | Command-line argument parsing                |
| 0x0B/0x0C                       | Dynamic memory: `malloc`, `calloc`, `realloc`|
| 0x0D-preprocessor               | Macros and compile-time directives           |
| 0x0E-structures_typedef         | Structs and typedef abstractions             |
| 0x0F-function_pointers          | Using function pointers and callbacks        |
| 0x10-variadic_functions         | Working with variable-length arguments       |
| 0x12/0x13                       | Singly & doubly linked lists                 |
| 0x14-bit_manipulation           | Bit-level logic and memory representation    |
| 0x15-file_io                    | System calls for file I/O                    |
| 0x17-doubly_linked_lists        | Advanced doubly linked list operations       |
| 0x18-dynamic_libraries          | Shared object compilation and linking        |

##  Sample Highlights

-  **0x00-hello_world/4-puts.c**
  ```
  puts("\"Programming is like building a multilingual puzzle");
```
 **0x01-variables_if_else_while/0-positive_or_negative.c**
Generates a random integer and prints if it is positive, zero, or negative.

 **0x02-functions_nested_loops/0-putchar.c**
Implements _putchar using custom header files and manual character printing.

 **0x05/0x06/0x07**
Implements:
Pointer manipulation and memory copying
- _strcat, _memset
- String reversal

**-recursion/0-puts_recursion.c**
Recursive implementation of puts() behavior.


##  Learning Objectives

- Understanding the C compilation process
- Grasping memory models and pointer operations
- Mastering control flow and recursion
- Developing reusable libraries and function abstractions
- Implementing standard data structures from scratch
- Using system-level programming concepts like file descriptors and bitwise logic

##  Build & Run

Each subdirectory contains source files (`.c`) and header files (`.h`) that can be compiled individually:

```
gcc -Wall -Wextra -Werror -pedantic 0x02-functions_nested_loops/0-putchar.c -o putchar
./putchar
```

##  Prerequisites

- GCC (GNU Compiler Collection)
- Make (optional)
- Unix-based OS (Ubuntu recommended)
