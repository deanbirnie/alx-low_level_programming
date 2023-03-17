# 0x0C. C - More malloc, free

In this project we reinforce the concept of dynamically allocating and freeing memory by attempting more tasks, some of which recreate existing C functions.

## Concepts:

This project focusses on the following concepts:

 - Dynamic Memory Allocation - malloc, free

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [How to use malloc to dynamically allocate memory](https://www.youtube.com/watch?v=yFboyOwk2oM)
 - [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - Trust no one

[0-malloc_checked.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-malloc_checked.c)

Overview:

Write a function that allocates memory using `malloc`.

### Task 1 - string_nconcat

[1-string_nconcat.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-string_nconcat.c)

Overview:

Write a function that concatenates two strings, `s1` and `s2`, where the first `n` bytes of `s2` are concatenated onto `s1`.

### Task 2 - _calloc

[2-calloc.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0C-more_malloc_free/2-calloc.c)

Overview:

Write a function that allocates memory for an array using `malloc`. Here, we write our own version of `calloc` which uses `malloc` to allocate memory for an array and then initaialises all elements to zero.

### Task 3 - array_range

[3-array_range.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0C-more_malloc_free/3-array_range.c)

Overview:

Write a function that creates an array of integers. The created array should contain all values from `min` to `max`.

### Advanced Tasks:

### Task 4 - _realloc

[100-realloc.c]()

Overview:

Write a function that reallocates a memory block using `malloc` and `free`. Here we use `malloc` and `free` to create our own version of the function `realloc`.

### Task 5 - We must accept finite disappointment, but never lose infinte hope

[101-mul.c]()

Overview:

Write a program that multiplies two positive numbers.