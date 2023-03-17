# 0x08. C - Recursion

This project covers recursion in the context of C programming. Recursion is a method where the solution to a problem depends on solutions to smaller instances of the same problem. In this regard, a recursive function is a function that calls itself.

## Concepts:

This project focusses on the following concepts:

 - Recursion

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [Loops vs Recursion - Computerphile Video](https://www.youtube.com/watch?v=HXNhEYqFo0o&list=TLPQMDgwMzIwMjOvuYgZlP9GWg&index=2)
 - [Assignment Operators in C](https://www.geeksforgeeks.org/assignment-operators-in-c-c/)
 - [0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230317%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230317T162049Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=65cccb90456db07242e81e8c412e7f24bc4d7c92dc290b30bbdf4d5e12de41b2)
 - [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
 - [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
 - [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
 - [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

[0-puts_recursion.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x08-recursion/0-puts_recursion.c)

Overview:

Write a function that prints a string, followed by a new line.

### Task 1 - Why is it so important to dream? Because, in my dreams we are together

[1-print_rev_recursion.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x08-recursion/1-print_rev_recursion.c)

Overview:

Write a function that prints a string in reverse.

### Task 2 - Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

[2-strlen_recursion.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x08-recursion/2-strlen_recursion.c)

Overview:

Write a function that returns the length of a string.

### Task 3 - You mustn't be afraid to dream a little bigger, darling

[3-factorial.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x08-recursion/3-factorial.c)

Overview:

Write a function that returns the factorial of a given number.

 - Prototype: int factorial(int n);
 - If n is lower than 0, the function should return -1 to indicate an error
 - Factorial of 0 is 1

### Task 4 - Once an idea has taken hold of the brain it's almost impossible to eradicate

[4-pow_recursion.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x08-recursion/4-pow_recursion.c)

Overview:

Write a function that returns the value of x raised to the power of y.

 - Prototype: int _pow_recursion(int x, int y);
 - If y is lower than 0, the function should return -1
 - FYI: The standard library provides a different function: pow. Run man pow to learn more.

### Task 5 - Your subconscious is looking for the dreamer

[5-sqrt_recursion.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x08-recursion/5-sqrt_recursion.c)

Overview:

Write a function that returns the natural square root of a number.

 - Prototype: int _sqrt_recursion(int n);
 - If n does not have a natural square root, the function should return -1
 - FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

### Task 6 - Inception. Is it possible?

[6-is_prime_number.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x08-recursion/6-is_prime_number.c)

Overview:

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

 - Prototype: int is_prime_number(int n);

### Task 7 - They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything

[100-is_palindrome.c]()

Overview:

Write a function that returns 1 if a string is a palindrome and 0 if not.

 - Prototype: int is_palindrome(char *s);
 - An empty string is a palindrome

### Task 8 - Inception. Now, before you bother telling me it's impossible...

[101-wildcmp.c]()

Overview:

Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

 - Prototype: int wildcmp(char *s1, char *s2);
 - s2 can contain the special character *.
 - The special char * can replace any string (including an empty string)