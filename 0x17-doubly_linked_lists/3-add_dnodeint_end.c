#include "lists.h"

/**
 * dlistint_t - add a new node at the end of a dlistint_t list
 *
 * @head: pointer to the head of a dlistint_t list
 * @n: new element to be added to the list
 *
 * Return: address of the new elemenbt or NULL if failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		new->prev = end;
		end->next = new;
	}

	return (new);
}
