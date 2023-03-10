#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: pointer to array to be reversed
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	n = n - 1;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
