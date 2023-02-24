#include "main.h"

/**
 * print_square - prints a square of dimensions 'size'
 *
 * @size: integer passed to function
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
