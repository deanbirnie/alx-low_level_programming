#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 *
 * @array: array passed to function
 * @size: size of the array
 * @action: variable of pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
