# 0x06. C - More Pointers, Arrays & Strings

Practicing with more tasks on pointers, arrays and strings.

## Concepts:

This project focusses on the following concepts:

 - Pointers
 - Arrays
 - Strings

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
 - [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
 - [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
 - [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - strcat

[0-strcat.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c)

Overview:

Write a function that concatenates two strings.

### Task 1 - strncat

[1-strncat.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-strncat.c)

Overview:

Write a function that concatenates two strings.

### Task 2 - strncpy

[2-strncpy.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-strncpy.c)

Overview:

Write a function that copies a string.

### Task 3 - strcmp

[3-strcmp.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-strcmp.c)

Overview:

Write a function that compares two strings.

### Task 4 - I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

[4-rev_array.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-rev_array.c)

Overview:

Write a function that reverses the content of an array of integers.

### Task 5 - Always look up

[5-string_toupper.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-string_toupper.c)

Overview:

Write a function that changes all lowercase letters of a string to uppercase.

### Task 6 - Expect the best. Prepare for the worst. Capitalize on what comes

[6-cap_string.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-cap_string.c)

Overview:

Write a function that capitalizes all words of a string.

### Task 7 - Mozart composed his music not for the elite, but for everybody

[7-leet.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-leet.c)

Overview:

Write a function that encodes a string into 1337.

### Advanced Tasks:

### Task 8 - rot13

[100-rot13.c]()

Overview:

Write a function that encodes a string using [rot13](https://en.wikipedia.org/wiki/ROT13).

### Task 9 - Numbers have life; they're not just symbols on paper

[101-print_number.c]()

Overview:

Write a function that prints an integer.

### Task 10 - A dream doesn't become reality through magic; it takes sweat, determination and hard work

[102-magic.c]()

Overview:

Add one line to this code, so that the program prints a[2] = 98, followed by a new line.

 - You are not allowed to use the variable a in your new line of code
 - You are not allowed to modify the variable p
 - You can only write one statement
 - You are not allowed to use ,
 - You are not allowed to code anything else than the line of expected line of code at the expected line
 - Your code should be written at line 19, before the ;
 - Do not remove anything from the initial code (not even the comments)
 and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
 - You are allowed to use the standard library

### Task 11 - It is the addition of strangeness to beauty that constitutes the romantic character in art

[103-infinite_add.c]()

Overview:

Write a function that adds two numbers.

### Task 12 - Noise is a buffer, more effective than cubicles or booth walls

[104-print_buffer.c]()

Overview:

Write a function that prints a buffer.

 - Prototype: void print_buffer(char *b, int size);
 - The function must print the content of size bytes of the buffer pointed by b
 - The output should print 10 bytes per line
 - Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
 - Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
 - Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
 - Each line ends with a new line \n
 - If size is 0 or less, the output should be a new line only \n
 - You are allowed to use the standard library
 - The output should look like the following example, and formatted exactly the same way:

```
julien@ubuntu:~/0x06$ cat 104-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-main.c 104-print_buffer.c -o 104-buffer
julien@ubuntu:~/0x06$ ./104-buffer 
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a 
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is 
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun 
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
julien@ubuntu:~/0x06$
```
