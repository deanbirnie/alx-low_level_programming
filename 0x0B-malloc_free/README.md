# 0x0B. C - Malloc, Free

Here we are introduced to `malloc`, a funxction that allows us to dynamically allocate memory. We also get to use `free` to "free" up the memory once our code has executed.

## Concepts:

This project focusses on the following concepts:

 - Automatic Memory Allocation
 - Dynamic Memory Allocation
 - Free

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [0x0a - malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230317%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230317T174139Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=3a76f790f19691e86d101c4e89d9018b00da7337293b6fd9b942b8752135d3e5)
 - [Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)](https://www.youtube.com/watch?v=xDVC3wKjS64)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - Float like a butterfly, sting like a bee

[0-create_array.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)

Overview:

Write a function that creates an array of chars, and initializes it with a specific char.

 - Prototype: char *create_array(unsigned int size, char c);
 - Returns NULL if size = 0
 - Returns a pointer to the array, or NULL if it fails

### Task 1 - The woman who has no imagination has no wings

[1-strdup.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)

Overview:

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

 - Prototype: char *_strdup(char *str);
 - The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
 - Returns NULL if str = NULL
 - On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

### Task 2 - He who is not courageous enough to take risks will accomplish nothing in life

[2-str_concat.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c)

Overview:

Write a function that concatenates two strings.

 - Prototype: char *str_concat(char *s1, char *s2);
 - The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
 - if NULL is passed, treat it as an empty string
 - The function should return NULL on failure

### Task 3 - If you even dream of beating me you'd better wake up and apologize

[3-alloc_grid.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)

Overview:

Write a function that returns a pointer to a 2 dimensional array of integers.

 - Prototype: int **alloc_grid(int width, int height);
 - Each element of the grid should be initialized to 0
 - The function should return NULL on failure
 - If width or height is 0 or negative, return NULL

### Task 4 - It's not bragging if you can back it up

[4-free_grid.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c)

Overview:

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

 - Prototype: void free_grid(int **grid, int height);
 - Note that we will compile with your alloc_grid.c file. Make sure it compiles.

### Advanced Tasks:

### Task 5 - It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

[100-argstostr.c]()

Overview:

Write a function that concatenates all the arguments of your program.

 - Prototype: char *argstostr(int ac, char **av);
 - Returns NULL if ac == 0 or av == NULL
 - Returns a pointer to a new string, or NULL if it fails
 - Each argument should be followed by a \n in the new string

### Task 6 - I will show you how great I am

[101-strtow.c]()

Overview:

Write a function that splits a string into words.

 - Prototype: char **strtow(char *str);
 - The function returns a pointer to an array of strings (words)
 - Each element of this array should contain a single word, null-terminated
 - The last element of the returned array should be NULL
 - Words are separated by spaces
 - Returns NULL if str == NULL or str == ""
 - If your function fails, it should return NULL
