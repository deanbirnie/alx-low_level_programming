#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string pointer passed to function
 * @s2: second string pointer passed to function
 *
 * Return: value difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, str;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			str = s1[i] - s2[i];


			return (str);
		}
		i++;
	}
	str = s1[i] - s2[i];

	return (str);
}
