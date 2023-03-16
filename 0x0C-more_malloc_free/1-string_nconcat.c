#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates 2 strings, s1 followed by first n bytes of s2
 *
 * @s1: First string passed to function
 * @s2: Second string passed to function
 * @n: number of bytes to take from start of s2
 *
 * Return: pointer to new address in memory with concatenated string or NULL
 * on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = n, j = 0, k, l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l] != '\0')
	{
		l++;
		i++;
	}
	while (j < n)
	{
		j++;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (k = 0; k < l; k++)
	{
		str[i++] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		str[i++] = s2[k];
	}
	str[i] = '\0';
	return (str);
}
