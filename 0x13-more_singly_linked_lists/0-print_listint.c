#include "lists.h"

/**
 * print_listint - prints a listint_t list of integers
 *
 * @h: pointer to the head of a listint_t list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
