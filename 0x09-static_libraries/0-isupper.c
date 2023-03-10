#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: character being passed to function
 *
 * Return: 1 (if uppercase), else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
