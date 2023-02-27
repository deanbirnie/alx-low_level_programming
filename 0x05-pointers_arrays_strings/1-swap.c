#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: pointer to first integer to be swapped
 * @b: pointer to second integer
 */
void swap_int(int *a, int *b)
{
	int first = *a, second = *b;

	*a = second;
	*b = first;
}
