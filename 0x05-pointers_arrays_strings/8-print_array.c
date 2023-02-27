#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 *
 * @a: pointer passed to function
 * @n: represents number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	putchar('\n');
}
