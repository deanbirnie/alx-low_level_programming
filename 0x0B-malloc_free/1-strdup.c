#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a copy of the string passed to it
 *
 * @str: String passed to function
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int i = 0, j;
		char *cp_str;

		while (str[i] != '\0')
		{
			i++;
		}
		cp_str = malloc(i + 1);
		if (cp_str == NULL)
		{
			return (NULL);
		}
		for (j = 0; j <= i; j++)
		{
			cp_str[j] = str[j];
		}
		cp_str[i + 1] = '\0';

		return (cp_str);
	}
}
