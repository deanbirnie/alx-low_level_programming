#include "main.h"

/**
 * flip_bits - counts the number of bits that need to be flipped
 * to get from n to m.
 *
 * @n: first number passed to function
 * @m: second number passed to function
 *
 * Return: number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int x = n ^ m;

	while (x != 0)
	{
		if (x & 1)
		{
			i++;
		}

		x >>= 1;
	}

	return (i);
}
