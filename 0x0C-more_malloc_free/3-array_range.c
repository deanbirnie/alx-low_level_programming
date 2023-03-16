#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (incl)
 *
 * @min: min value for array
 * @max: to max value for array
 *
 * Return: pointer to array in memory OR NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr, i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(*arr) * ((max - min) + 1));
		if (arr != NULL)
		{
			for (i = min; i <= max; i++)
			{
				arr[j++] = i;
			}

			return (arr);
		}
		else
		{
			return (NULL);
		}
	}
}
