#include "main.h"

/**
 * _pow_recursion - returns value of x to the power of y
 *
 * @x: first value passed to function
 * @y: second value passed to function
 *
 * Return: value of x to power of y OR -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
