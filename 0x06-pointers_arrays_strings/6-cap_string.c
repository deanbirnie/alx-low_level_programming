#include "main.h"

/**
 * cap_string - capitalises all words of a string
 *
 * @s: string passed to function
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0, j = 0, k;
	char c[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0, k = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			k = 1;
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == s[i])
				k = 1;
		}

		if (k)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
				k = 0;
			}
			else if (s[i] >= 65 && s[i] <= 90)
				k = 0;
			else if (s[i] >= 48 && s[i] <= 57)
				k = 0;
		}
	}

	return (s);
}
