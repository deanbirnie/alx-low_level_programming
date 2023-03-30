# 0x0A. C - argc, argv

This project focusses on argc and argv which allow us to pass commands or additional information to our C program. We dive into this and explore how this can be extremely useful to us.

## Concepts:

This project focusses on the following concepts:

 - Arguments to Main (argc and argv)

## Resources:

I have found the following resources to be particularly useful for this project (as well as the concepts listed in the section above):

 - [Arguments to Main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
 - [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
 - [What do argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
 - [Research: unused variable C](https://www.google.com/search?q=unused+variable+C&sxsrf=AJOqlzVOEpS5GnEBjTt1ScWkTSwIRoe97g%3A1678471497388&source=hp&ei=SXELZIDAFbGYhbIPnp6-4AU&iflsig=AK50M_UAAAAAZAt_WXgmirXfrDrTJG3XTsAJATUXYRlo&ved=0ahUKEwjAiPbK-dH9AhUxTEEAHR6PD1wQ4dUDCAg&uact=5&oq=unused+variable+C&gs_lcp=Cgdnd3Mtd2l6EANQAFgAYABoAHAAeACAAQCIAQCSAQCYAQA&sclient=gws-wiz)

## Tasks:

The following is a breakdown of all of the tasks for this project. The actual instructions for each task can be found on the relevant project page on the ALX SE Intranet, however, sharing that information is prohibited. I have therefore given a brief description of what each entails, what the code does and in some cases, I have included some extra information for context and learning (particularly the more advanced topics).

### Task 0 - It ain't what they call you, it's what you answer to

[0-whatsmyname.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0A-argc_argv/0-whatsmyname.c)

Overview:

Write a program that prints its name, followed by a new line.

 - If you rename the program, it will print the new name, without having to compile it again
 - You should not remove the path before the name of the program

### Task 1 - Silence is argument carried out by other means

[1-args.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0A-argc_argv/1-args.c)

Overview:

Write a program that prints the number of arguments passed into it.

 - Your program should print a number, followed by a new line

### Task 2 - The best argument against democracy is a five-minute conversation with the average voter

[2-args.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0A-argc_argv/2-args.c)

Overview:

Write a program that prints all arguments it receives.

 - All arguments should be printed, including the first one
 - Only print one argument per line, ending with a new line

### Task 3 - Neither irony nor sarcasm is argument

[3-mul.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0A-argc_argv/3-mul.c)

Overview:

Write a program that multiplies two numbers.

 - Your program should print the result of the multiplication, followed by a new line
 - You can assume that the two numbers and result of the multiplication can be stored in an integer
 - If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

### Task 4 - To infinity and beyond

[4-add.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0A-argc_argv/4-add.c)

Overview:

Write a program that adds positive numbers.

 - Print the result, followed by a new line
 - If no number is passed to the program, print 0, followed by a new line
 - If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
 - You can assume that numbers and the addition of all the numbers can be stored in an int

### Advanced Tasks:

### Task 5 - Minimal Number of Coins for Change

[100-change.c](https://github.com/deanbirnie/alx-low_level_programming/blob/master/0x0A-argc_argv/100-change.c)

Overview:

Write a program that prints the minimum number of coins to make change for an amount of money.

 - Usage: ./change cents
 - where cents is the amount of cents you need to give back
 - if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
 - you should use atoi to parse the parameter passed to your program
 - If the number passed as the argument is negative, print 0, followed by a new line
 - You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
