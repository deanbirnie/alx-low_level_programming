# 0x09. C - Static Libraries

## Concepts:

 - Creating a static library

## Resources:

 - [Building and Using Static and Shared C Libraries](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
 - [Difference between Dynamic and Static Libraries](https://www.youtube.com/watch?v=eW5he5uFBNM)

## Tasks:

### Task 0 - Create a Static Library

Overview:

In order to create our static library we first need to create a 'main.h' file containing all of the required prototypes and make sure we have all the required (.c) files in our project directory.

Once we have our required files organised, we can go ahead and compile all of these files so that we have object (.o) files for each .c file.

`gcc -c *.c`

Now that we have all necessary files, we need to archive these files.

`ar -rc libmy.a *.o`

Here we use the `ar` command to create the archive `libmy.a` using any .o file in the current directory. The `r` flag replaces older object files in the library with new object files. The `c` flag tells `ar` to create the library if it doesn't already exist.

Finally, the archive file needs to be indexed. This is used by the compiler to speed up symbol-lookupinside the library and to make sure that the order of the symbols in the library won't matter during compilation.

`ranlib libmy.a`

### Task 1 Static Library Creation Script

Overview:

Create a script that follows the steps outlined in task 0 in order to create a static library called `liball.a` from all `.c` files in the current directory.