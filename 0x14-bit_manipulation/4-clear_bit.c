#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 *
 * @n: ul int to be parsed and manipulated
 * @index: place value of bit to be set to 0
 *
 * Return: 1 if it worked, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
