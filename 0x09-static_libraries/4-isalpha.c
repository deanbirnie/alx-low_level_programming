#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: character passed to function
 *
 * Return: 1 if c is a letter upper or lowercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
