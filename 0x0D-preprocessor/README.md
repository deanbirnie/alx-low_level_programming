# 0x0D. C - Preprocessor

We learn more about the preprocessor and it's role in the compilation process of C source code.

## Concepts:

This project focusses on the following concepts:

 - Preprocessor

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [Understanding C program Compilation Process](https://www.youtube.com/watch?v=eW5he5uFBNM)
 - [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
 - [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
 - [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
 - [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
 - [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
 - [include guard](https://en.wikipedia.org/wiki/Include_guard)
 - [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - Object-like Macro

[0-object_like_macro.h](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0D-preprocessor/0-object_like_macro.h)

Overview:

Create a header file that defines a macro named SIZE as an abbreviation for the token 1024. Naming of the file for the include guard should be `OBJECT_LIKE_MACRO_H_` (always capitalised).

### Task 1 - Pi

[1-pi.h](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0D-preprocessor/1-pi.h)

Overview:

Create a header file that defines a macro named SIZE as an abbreviation for the token 1024. Naming of the file for the include guard should be `PI_H_` (always capitalised).

### Task 2 - File name

[2-main.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0D-preprocessor/2-main.c)

Overview:

Write a program that prints the name of the file it was compiled from, followed by a new line.

 - You are allowed to use the standard library.

### Task 3 - Function-like Macro

[3-function_like_macro.h](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0D-preprocessor/3-function_like_macro.h)

Overview:

Write a function-like macro ABS(x) that computes the absolute value of a number x. Named as `FUNCTION_LIKE_MACRO_H_` in header include guard (always capitalised).

### Task 4 - SUM

[4-sum.h](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0D-preprocessor/4-sum.h)

Overview:

Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.