#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string passed to function
 *
 * Return: string
 */
char *leet(char *s)
{
	int i = 0, j = 0, k = 5;
	char t[5] = {'A', 'E', 'O', 'T', 'L'};
	char u[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < k)
		{
			if (s[i] == t[j] || s[i] - 32 == t[j])
			{
				s[i] = u[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}
