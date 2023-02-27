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

	if (i % 2)
	{
		for (j = ((i - 1) / 2); j < (i - 1); j++)
		{
			_putchar(str[j + 1]);
		}
	}

	else
	{
		for (j = (i / 2); j < i; j++)
		{
			_putchar(str[j]);
		}
	}

	_putchar('\n');
}
