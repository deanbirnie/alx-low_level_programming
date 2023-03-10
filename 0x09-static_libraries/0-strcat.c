#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 *
 * @src: first string pointer passed to function
 * @dest: second string pointer passed to function
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (k = 0; k <= j; k++)
	{
		dest[i] = src[k];
		i++;
	}

	return (dest);
}
