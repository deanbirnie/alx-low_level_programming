#include "main.h"

/**
 * _strstr - finds a substring
 *
 * @haystack: string in which to search, pointer passed to function
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of substring or NULL if no substring
 * is found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
