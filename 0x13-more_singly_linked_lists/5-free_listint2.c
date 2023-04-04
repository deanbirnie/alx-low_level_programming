#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and replaces the head with NULL
 *
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			/*use () so * is evaluated before ->*/
			*head = temp;
		}
	}
}
