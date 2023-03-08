#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 *
 * @n: value passed to function
 *
 * Return: natural square root of n OR -1 if n does not have a natural sqr root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

/**
 * square_root - testing for natural square root
 *
 * @n: original number to test, passed to function
 * @i: comparison value for testing for natural square
 *
 * Return: natural square root of n OR -1 if no natural square
 */
int square_root(int n, int i)
{
	if (n < i * i)
		return (-1);
	else if (n == i * i)
		return (i);
	return (square_root(n, i + 1));
}
