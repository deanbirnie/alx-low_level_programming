# 0x14. C - Bit Manipulation

In this project we learn to manipulate binary representations of characters and values using bit manipulation, or, bitwise operators. We also take a look at other value and character representations.

## Concepts:

This project focusses on the following concepts:

 - Bit Manipulation
 - Bitwise operators

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [Reverse-engineering: Using GDB in Linux](https://medium.com/@rickharris_dev/reverse-engineering-using-linux-gdb-a99611ab2d32)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - 0

[0-binary_to_uint.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c)

Write a function that converts a binary number to an `unsigned int`.

 - Prototype: `unsigned int binary_to_uint(const char *b);`
 - where `b` is pointing to a string of `0` and `1` chars
 - Return: the converted number, or 0 if
   - there is one or more chars in the string `b` that is not `0` or `1`
   - `b` is `NULL`

### Advanced Tasks:

### Task 9 - Crackme3

[101-password](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x14-bit_manipulation/101-password)

Overview:

Find the password for [this program](https://github.com/holbertonschool/0x13.c).

 - Save the password in the file `101-password`
 - Your file should contain the exact password, no new line, no extra space

You will need to clone this repository so you have the file in your sandbox/VM.

```
/$ cd
~$ git clone https://github.com/holbertonschool/0x13.c.git
```

Move the `crackme3` file into your Bit Manipulation project directory.

```
~$ mv ./0x13.c/crackme3 ./0x14-bit_manipulation/crackme3
```

If you, like me, like a clean directory you can clean up the remnants from the 0x13.c directory and remove the directory itself.

At this point you have the executable in your project directory and can start tinkering.

This task has two parts to it which I will break down and explore. 

#### Part One - Finding the password:

This part is really difficult and for you to find the password yourself requires an understanding of a few specific tools as well as an understanding of assembly code which is where we'll actually be digging around for the password.

As for the process you can follow my steps below. My process leverages information from [this](https://medium.com/@rickharris_dev/reverse-engineering-using-linux-gdb-a99611ab2d32) article.

First we try to run the executable to see what happens.

```
$ ./crackme3
```

The output is something along the lines of:

```
Usage: ./crackme3 password
```

This tells us how we are expected to input our password.

We can use `ltrace` to see how the program runs and if there are any hints. Entering _password_ as a test password when executing the file gives us the following output.

```
$ ltrace ./crackme3 password
$ __libc_start_main(0x40068c, 2, 0x7ffcdd754bd8, 0x400710 <unfinished …>

strlen(“password”) = 8

puts(“ko”ko

) = 3

+++ exited (status 1) +++
```

We notice here that the program seems to be trying to calculate the string length, we can assume for some sort of comparison. This may or may not be useful in other examples and, for now, it isn't entirely useful to us.

We now turn to GDB which is a popular debugging tool. We can run GDB and the crackme3 executable with the following command:

```
$ gdb ./crackme3
```

You will then notice that after each process has run we do not return to the shell. We instead are prompted again by the GDB tool which looks like this: `(gdb)`. This is where we can run our next command.

I am not going to get into the differences in syntax between AT&T and Intel, you can research this further. What we notice from the output of our command above is that down the right-hand column, there are calls to several functions. We'll start by disassembling the `main` function.

```
(gdb) disass main
```

We can see that there is not much of interest to us in the `main` function itself except that it relies on the `check_password` function to validate the password. For this we disassemble the function.

```
(gdb) disass check_password
```

This is where we find what we're looking for. For starters, we can see that the length of the string does matter and is used in the process. If the string length is not 4 characters the program returns `FALSE` and exits, leaving us with the `ko` response. If the string we entered as our password is 4 characters, the program continues and starts comparing our string to the known correct password stored within the program.

To dig deeper, we set a breakpoint at the end of the section where the program conducts the comparisons. It's important to note that the assembly code I was presented with was different to the code in the linked article. For this reason I have not included the output and I will leave you to read the linked article and figure this out for yourself. We can set the breakpoint with the below input. Again, yours may be different.

```
(gdb) b *0x400653
```

Note that you may not get an output. We then run the program again using the `run` command followed by the password we'd like to input. Since we initiated GDB with the `crackme3` file, it already knows what we're trying to run. Since we know that the password should be 4 characters, we'll use _test_.

```
(gdb) run test
```

GDB should run the executable and stop at the breakpoint we set. We can now look into the information currently stored in the registers.

```
(gdb) info registers
```

Based on this output we can see a few things:

 - RAX is 0x74 which we know to be 't', the first letter in our password string.
 - RDX is 0x48 is the first character of the password we're looking for.
 - RCX contains which is 0x46c6f48 multiple characters which is in reverse order and can be broken down into:
   - 0x48 or 'H'
   - 0x6f or 'o'
   - 0x6c or 'l'
   - 0x4 or ^D or EOT

We therefore know that the password is "Hol" followed by ASCII character 4 which is the "end of transmission" character. We can't yet test that this is correct for reasons that will become clear soon. This is where it gets slightly complicated and becomes the second part to our problem.

#### Part Two - creating the password file:

Now that we know what the password is, we have to find a way to be able to input the password when we want to run the executable file as per the format in our very first step. The problem is that we can't quite enter the EOT character (ASCII code 4). So we need a way to create a file that contains this particular string and absolutely nothing else.

To do this I created a simple C program that only contains one function. In this function we set a character array with our individual characters followed by the terminating NULL byte. You have a choice to make now. You can use any value that represents a character. In my case, because we decoded from hex codes, I figured it would eliminate both work and possibilities for errors if I just use the same codes in my array, hence, it looks like this:

```
char c[5] = {ox48, 0x6f, 0x6c, 0x4, '\0'};
```

We can now finish off our function and program by having it create the file `101-password` and populate it with our array. Be sure not to include any spaces, new lines or any other character or it will not work.

Finally, we can test our work. Make sure your files are in the same directory.

```
$ ./crackme3 `cat 101-password`
$ Congratulations!
```

I tried numerous different ways to implement a prompt function to populate our array with the characters from the password but I had a really hard time adding the EOT character because it's in a different format. Due to time constraints I opted to hard-code the array but I would really like to come back and try again as soon as I have time.