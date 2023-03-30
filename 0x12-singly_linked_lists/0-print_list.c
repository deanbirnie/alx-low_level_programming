#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 *
 * @h: pointer to a list_t struct
 *
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *pos;
	size_t i = 0;

	for (pos = h; pos != NULL; pos = pos->next)
	{
		if (pos->str != NULL)
		{
			printf("[%d] %s\n", pos->len, pos->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
	}
	return (i);
}
