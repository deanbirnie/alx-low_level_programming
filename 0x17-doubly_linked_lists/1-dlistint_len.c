#include "lists.h"

/**
 * dlistint_len - find the number of elements in a dlistint_t list
 *
 * @h: pointer to a dlistint_t list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
