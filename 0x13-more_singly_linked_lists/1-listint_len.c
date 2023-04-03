#include "lists.h"

/**
 * listint_len - determines the number of elements in a listint_t list
 *
 * @h: pointer to the head of a listint_t list
 *
 * Return: the number of elements in a listint_t list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
