#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and replaces the head with NULL
 *
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t **temp = head, *current;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			free(current);
			/*use () so * is evaluated before ->*/
			*head = (*head)->next;
		}
	}

	*temp = NULL;
}
