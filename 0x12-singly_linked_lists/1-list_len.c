#include "lists.h"

/**
 * list_len - loops throught list_t to find the number of elements
 *
 * @h: pointer to a list_t struct
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
