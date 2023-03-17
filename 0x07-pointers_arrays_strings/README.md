# 0x07. C - Even more pointers, arrays and strings

This project is the third on the topic of pointers, arrays and strings. Here we are building on what we have already learned but this time adding a few layers of complexity. We are going to be working with pointers to pointers and multi-dimensional arrays.

## Concepts:

This project focusses on the following concepts:

 - Pointers
 - Pointers to pointers
 - Arrays
 - Multi-dimensional arrays

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [Pointer to pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
 - [More Pointer to pointers](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
 - [Multi-dimensional Arrays](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
 - [2D Arrays](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - memset

[0-memset.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c)

Overview:

Write a function that fills memory with a constant byte.

### Task 1 - memcpy

[1-memcpy.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c)

Overview:

Write a function that copies memory area.

### Task 2 - strchr

[2-strchr.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c)

Overview:

Write a function that locates a character in a string.

### Task 3 - strspn

[3-strspn.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c)

Overview:

Write a function that gets the length of a prefix substring.

### Task 4 - strpbrk

[4-strpbrk.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-strpbrk.c)

Overview:

Write a function that searches a string for any of a set of bytes.

### Task 5 - strstr

[5-strstr.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/5-strstr.c)

Overview:

Write a function that locates a substring.

### Task 6 - Chess is mental torture

[7-print_chessboard.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/7-print_chessboard.c)

Overview:

Write a function that prints the chessboard.

### Task 7 - The line of life is a ragged diagonal between duty and desire

[8-print_diagsums.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/8-print_diagsums.c)

Overview:

Write a function that prints the sum of the two diagonals of a square matrix of integers.

 - Prototype: void print_diagsums(int *a, int size);
 - Format: see example
 - You are allowed to use the standard library
Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

### Advanced Tasks:

### Task 8 - Double pointer, double fun

[100-set_string.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/100-set_string.c)

Overview:

Write a function that sets the value of a pointer to a char.

### Task 9 - My primary goal of hacking was the intellectual curiosity, the seduction of adventure

[101-crackme_password](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/101-crackme_password)

Overview:

Create a file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.

For this task, I had to rely on guidance from peers and I still don't necessarily understand what we were actually trying to achieve here. But here's the process:

 - open/create the file with `vi` - `~$ vi 101-crackme_password`
 - add password to the file, in this case `abc123`
 - then:
   - `:Set binary`
   - `:Set noeol`
   - `:wq!`
 - push file