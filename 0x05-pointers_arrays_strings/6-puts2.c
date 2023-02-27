#include "main.h"

/**
 * puts2 - prints alternating characters of a string
 *
 * @str: pointer passed to function
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(i % 2))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
