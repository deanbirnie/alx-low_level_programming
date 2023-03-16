#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array and intialises to 0
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the array in memory OR NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			arr[i] = 0;
		}
		return (arr);
	}
	else
	{
		free(arr);
		return (NULL);
	}
}
