#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 *
 * @head: pointer to a pointer to the head node of a listint_t list
 *
 * Return: the data from the deleted node or NULL if *head is NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *del = *head;
	int n;

	if (del != NULL)
	{
		*head = del->next;
		n = del->n;
		free(del);

		return (n);
	}
	else
	{
		return (0);
	}
}
