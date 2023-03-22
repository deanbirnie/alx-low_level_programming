#include "function_pointers.h"

/**
 * int_index - function that uses a pointer to a fucntion to search
 * for an integer
 *
 * @array: Array passed to function
 * @size: size of array passed to function
 * @cmp: variable for pointer to function
 *
 * Return: index of first element for which cmp does not return 0
 * or -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
