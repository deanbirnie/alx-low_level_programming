#include "main.h"

/**
 * _puts_recursion - prints a string to console without using a loop
 *
 * @s: string to be printed, passed to function
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
