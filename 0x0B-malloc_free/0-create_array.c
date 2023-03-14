#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initialises it with a specific
 * char
 *
 * @size: size of array passed to function
 * @c: char to initialise array with
 *
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *a;
		unsigned int i = 0;

		a = malloc(size);

		while (i < size)
		{
			a[i] = c;
			i++;
		}

		return (a);
	}
}
