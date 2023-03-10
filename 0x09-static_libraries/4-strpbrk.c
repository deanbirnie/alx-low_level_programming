#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string to search for passed to function
 * @accept: string to be searched in
 *
 * Return: pointer to byte s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
