#include "search_algos.h"

/**
 * print_array - prints the arrays in which the function has searched with
 * the required formatting
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; ++i)
	{
		if (i == 0)
		{
			printf("%d", array[i]);
		} else
		{
			printf(", %d", array[i]);
		}
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary Search Algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: index where value is located or -1 if array is NULL
 * or the value is not present.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		print_array(array + left, right - left + 1);
		middle = left + (right - left) / 2;
		if (array[middle] == value)
		{
			return (middle);
		} else if (array[middle] < value)
		{
			left = middle + 1;
		} else
		{
			right = middle - 1;
		}
	}

	return (-1);
}
