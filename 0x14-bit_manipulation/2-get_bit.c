#include "main.h"

/**
 * get_bit - takes an unsigned long int and finds a bit at
 * a specified index value
 *
 * @n: value to be parsed
 * @index: place value at which to find a bit
 *
 * Return: bit at given index or -1 if failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	i = 1 << index;

	return ((n & i) >> index);
}
