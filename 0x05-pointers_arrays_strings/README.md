# 0x05. C - Pointers, arrays & strings

We are exposed to pointers, arrays and strings for the first time. They go somewhat hand-in-hand.

## Concepts:

This project focusses on the following concepts:

 - Pointers and arrays
 - Data Structures

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
 - [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
 - [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
 - [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - 98 Battery st.

[0-reset_to_98.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c)

Overview:

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

### Task 1 - Don't swap horses in crossing a stream

[1-swap.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/1-swap.c)

Overview:

Write a function that swaps the values of two integers.

### Task 2 - This report, by its very length, defends itself against the risk of being read

[2-strlen.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/2-strlen.c)

Overview:

Write a function that returns the length of a string.

### Task 3 - I do not fear computers. I fear the lack of them

[3-puts.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/3-puts.c)

Overview:

Write a function that prints a string, followed by a new line, to stdout.

### Task 4 - I can only go one way. I've not got a reverse gear

[4-print_rev.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-print_rev.c)

Overview:

Write a function that prints a string, in reverse, followed by a new line.

### Task 5 - A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

[5-rev_string.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/5-rev_string.c)

Overview:

Write a function that reverses a string.

### Task 6 - Half the lies they tell about me aren't true

[6-puts2.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/6-puts2.c)

Overview:

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

### Task 7 - Winning is only half of it. Having fun is the other half

[7-puts_half.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/7-puts_half.c)

Overview:

Write a function that prints half of a string, followed by a new line.

### Task 8 - Arrays are not pointers

[8-print_array.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/8-print_array.c)

Overview:

Write a function that prints n elements of an array of integers, followed by a new line.

### Task 9 - strcpy

[9-strcpy.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/9-strcpy.c)

Overview:

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

### Task 10 - Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

[100-atoi.c]()

Overview:

Write a function that convert a string to an integer.

 - Prototype: int _atoi(char *s);
 - The number in the string can be preceded by an infinite number of characters
 - You need to take into account all the - and + signs before the number
 - If there are no numbers in the string, the function must return 0
 - You are not allowed to use long
 - You are not allowed to declare new variables of “type” array
 - You are not allowed to hard-code special values
 - We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

### Task 11 - Don't hate the hacker, hate the code

[101-keygen.c]()

Overview:

Create a program that generates random valid passwords for the program 101-crackme.

 - You are allowed to use the standard library
 - You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
 - man srand, rand, time
 - gdb and objdump can help