#include "main.h"

/**
 * _strncat - Concatenates n characters of string 2 with string 1
 *
 * @dest: pointer to destination string passed to function
 * @src: pointer to source string passed to function
 * @n: Number of characters to concatenate
 *
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
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

	if (n <= j)
	{
		for (k = 0; k <= n - 1; k++)
		{
			dest[i] = src[k];
			i++;
		}
	}
	else
	{
		for (k = 0; k <= j; k++)
		{
			dest[i] = src[k];
			i++;
		}
	}

	return (dest);
}
