#include "lists.h"

/**
 * add_nodeint_end - adds a new listint_t list node at the end of the list
 *
 * @head: pointer to the head node of the listint_t list
 * @n: data with which to fill the node
 *
 * Return: pointer to the head of the listint_t list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_new, *node_prev;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
	{
		return (NULL);
	}

	node_new->n = n;
	node_new->next = NULL;

	if (*head == NULL)
	{
		*head = node_new;
	}
	else
	{
		node_prev = *head;
		while (node_prev->next != NULL)
		{
			node_prev = node_prev->next;
		}
		node_prev->next = node_new;
	}

	return (*head);
}
