#include "main.h"

/**
 * _abs - computes absolute value of an int
 *
 *@c: Character passed to function
 *
 * Return: @c
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}

	else
		return (c * -1);
}
