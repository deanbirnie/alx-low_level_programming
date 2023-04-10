#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: ul int to replace the bit at given index with 1
 * @index: the place value of the bit to be set
 *
 * Return: 1 if it worked, -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n |= (1 << index);

	return (*n);
}
