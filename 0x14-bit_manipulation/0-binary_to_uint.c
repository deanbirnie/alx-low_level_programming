#include "main.h"

/**
 * binary_to_uint - converts a binary input string to an unsigned int
 *
 * @b: The binary number to convert input as a string
 *
 * Return: unsigned integer converted from binary
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		decimal = 0;
		
		for (i = 0; b[i]; i++)
		{
			if (b[i] < '0' || b[i] > '1')
			{
				return (0);
			}

			decimal = 2 * decimal + (b[i] - '0');
		}
	}

	return (decimal);
}
