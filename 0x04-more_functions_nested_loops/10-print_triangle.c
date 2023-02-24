#include "main.h"

/**
 * print_triangle - prints a triangle ofdimensions 'size'
 *
 * @size: integer passed to function
 */
void print_triangle(int size)
{
	if (size > 0 )
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
