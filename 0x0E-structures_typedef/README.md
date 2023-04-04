# 0x0E. C - Structures, typedef

We are introduced to the topic of `structures` and `typedef` as well as how they can be used in conjunction.

## Concepts:

This project focusses on the following concepts:

 - Structures
 - Typedef

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [0x0d.Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230320%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230320T124022Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=415dd99b6680b5dfb38a3d50a24202237a00529d1c6dc6a926ea35f7305ce506)
 - [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
 - [Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
 - [0x0d. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230320%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230320T124025Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=a7c62fb45e3bdeed652e7656413fe25148d673ea7485f0c1b3a37b0cea0d8dad)
 - [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
 - Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
 - [The Lost Art of C Structure Packing (Advanced - not mandatory)](http://www.catb.org/esr/structure-packing/)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - Poppy

[]()

Overview:

Define a new type `struct dog` with the following elements:

 - `name`, type = `char *`
 - `age`, type = `float`
 - `owner`, type = `char *`

### Task 1 - A dog is the only thing on earth that loves you more than you love yourself

[]()

Overview:

Write a function that initialize a variable of type `struct dog`

Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

### Task 2 - A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

[]()

Overview:

Write a function that prints a `struct dog`

 - Prototype: `void print_dog(struct dog *d);`
 - Format: see example bellow
 - You are allowed to use the standard library
 - If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil))`
 - If `d` is `NULL` print nothing.

### Task 3 - Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

[]()

Overview:

Define a new type `dog_t` as a new name for the type `struct dog`.

### Task 4 - A door is what a dog is perpetually on the wrong side of

[]()

Overview:

Write a function that creates a new dog.

 - Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
 - You have to store a copy of `name` and `owner`
 - Return `NULL` if the function fails

### Task 5 - How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

[]()

Overview:

Write a function that frees dogs.

 - Prototype: `void free_dog(dog_t *d);`
