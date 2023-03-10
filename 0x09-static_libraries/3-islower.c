#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: character to be checked (passed to function)
 *
 * Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
