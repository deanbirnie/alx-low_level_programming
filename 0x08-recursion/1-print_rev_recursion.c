#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse without using loops
 *
 * @s: string to be printed in reverse, passed to function
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
