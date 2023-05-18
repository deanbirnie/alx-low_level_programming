#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: pointer to the head of a dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *dlist;

	while (head != NULL)
	{
		dlist = head;
		head = head->next;
		free(dlist);
	}
}
