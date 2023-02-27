#include "main.h"

/**
 * _strcpy - copies string to buffer
 *
 * @dest: the target
 * @src: the source string
 *
 * Return: returns identical string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	while (src[i])
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
