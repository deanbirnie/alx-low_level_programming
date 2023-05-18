#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: pointer to the head of a dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
