#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two string and returns new memory location
 * with result.
 *
 * @s1: First string passed to function
 * @s2: Second strig passed to function
 *
 * Return: pointer to new memory address with result or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char  *str;
	int i = 0, j = 0, k, l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	str = malloc(i + j + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		str[l++] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		str[l++] = s2[k];
	}

	return (str);
}
