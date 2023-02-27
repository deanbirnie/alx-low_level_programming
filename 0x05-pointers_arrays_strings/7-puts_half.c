#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: pointer passed to function
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
	{
		i++;
	}

	for (j = (i / 2); j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
