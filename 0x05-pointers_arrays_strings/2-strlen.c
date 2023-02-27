#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to variable passed to function
 *
 * Return: integer (length of string)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
