# 0x12. C - Singly Linked Lists

We learn about singly linked lists and their implementations. We practice writing code that prints lists, adds new nodes to the before and after existing nodes as well as handling the memory allocation for the nodes.

## Concepts:

This project focusses on the following concepts:

 - Data Structures

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&t=130s)
 - [Google](https://www.google.com/#q=linked+lists)
 - [YouTube](https://www.youtube.com/results?search_query=linked+lists)
 - [Calling printf from the C standard library in assembly](https://dev.to/jmourtada/calling-printf-from-the-c-standard-library-in-assembly-1o39)
 - [Print a string to terminal without syscall](https://stackoverflow.com/questions/27594297/how-to-print-a-string-to-the-terminal-in-x86-64-assembly-nasm-without-syscall)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - Print list

[0-print_list.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c)

Overview:

Write a function that prints all the elements of a `list_t` list.

 - Prototype: `size_t print_list(const list_t *h);`
 - Return: the number of nodes
 - Format: see example
 - If `str` is `NULL`, print `[0] (nil)`
 - You are allowed to use `printf`

### Task 1 - List length

[1-list_len.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x12-singly_linked_lists/1-list_len.c)

Overview:

Write a function that returns the number of elements in a linked `list_t` list.

 - Prototype: `size_t list_len(const list_t *h);`

### Task 2 - Add node

[2-add_node.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x12-singly_linked_lists/2-add_node.c)

Overview:

Write a function that adds a new node at the beginning of a `list_t` list.

 - Prototype: `list_t *add_node(list_t **head, const char *str);`
 - Return: the address of the new element, or `NULL` if it failed
 - `str` needs to be duplicated
 - You are allowed to use `strdup`

### Task 3 - Add node at the end

[3-add_node_end.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x12-singly_linked_lists/3-add_node_end.c)

Overview:

Write a function that adds a new node at the end of a `list_t` list.

 - Prototype: `list_t *add_node_end(list_t **head, const char *str);`
 - Return: the address of the new element, or `NULL` if it failed
 - `str` needs to be duplicated
 - You are allowed to use `strdup`

### Task 4 - Free List

[4-free_list.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c)

Overview:

Write a function that frees a `list_t` list.

 - Prototype: `void free_list(list_t *head);`

### Advanced Tasks:

### Task 5 - The Hare and the Tortoise

[100-first.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x12-singly_linked_lists/100-first.c)

Overview:

Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.

 - You are allowed to use the `printf` function

Explanation:

 - [__attribute__((constructor))](https://www.geeksforgeeks.org/__attribute__constructor-__attribute__destructor-syntaxes-c/)

One permissable way to execute code before the `main` function in C (for this project we cannot use global variables), is to use `__attribute__((constructor))` which effectively tells the compiler that this specific piece of code needs to be executed first. See also `__attribute__((destructor))` in the link above which executes code last or after the `main` function.

### Task 6 - Real programmers can write assembly code in any language

[101-hello_holberton.asm](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x12-singly_linked_lists/101-hello_holberton.asm)

Overview:

Write a 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line.

 - You are only allowed to use the `printf` function
 - You are not allowed to use interrupts
 - Your program will be compiled using `nasm` and `gcc`:
  - `nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello`

Breakdown of code:

 - `extern printf`: defines the symbol `printf` which allows the linker to find the correct implementation of the `printf` function.
 - `.data` section defines a message to print and the format string to be passed to `printf()`. The message is defined using the `db` (define byte) directive, which creates an array of bytes in memory containing the characters of the string followed by a newline character (`0Ah`). The format string is also defined using the `db` directive and contains the format specifier `%s`, which tells `printf()` that a string will be printed.
 - `.text` section defines the `main()` function, which is the entry point of the program. The `global main` directive tells the linker that the symbol `main` is the entry point of the program.
 - `push rbp`: the base pointer (rbp) is saved on the stack to be restored later.
 - `mov rbp, rsp`: the base pointer is set to the current value of the stack pointer (rsp).
 - `sub rsp, 16`: 16 bytes of space are allocated on the stack for local variables.
 - `lea rdi, [message]`: the address of the message is loaded into the first argument register (rdi) using the `lea` (load effective address) instruction.
 - `mov rsi, format`: the address of the format string is loaded into the second argument register (rsi) using the `mov` (move) instruction.
 - `xor eax, eax`: the return value register (eax) is cleared to 0 using the `xor` (exclusive OR) instruction.
 - `call printf`: the `printf()` function is called with the two arguments. The function uses the format string to print the message to the standard output.
 - `mov rsp, rbp`: the stack pointer is restored to its original value.
 - `pop rbp`: the base pointer is restored.
 - `xor eax, eax`: the return value is set to 0 using the `xor` instruction.
 - `ret`: the `ret` (return) instruction returns control to the operating system, which will exit the program with the return value in the `eax` register (which is 0 in this case).
 