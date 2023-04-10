#include "main.h"

/**
 * print_binary - takes an unsigned long int and converts it to a binary
 * representation then prints it to console.
 *
 * @n: integer to be converted to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/**
		 * calls itself recursively, shifting `n` right by 1 bit.
		 * Effectively divides `n` by 2 and discards least
		 * significant bit.
		 */
		print_binary(n >> 1);
	}

	/**
	 * extracts the least significant bit of `n`, adds ASCII value
	 * for '0' and prints the result to console.
	 */
	_putchar('0' + (n & 1));
}
