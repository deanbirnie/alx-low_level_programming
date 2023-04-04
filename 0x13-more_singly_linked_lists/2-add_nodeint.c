#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to a pointer for the head of the listint_t list
 * @n: data to add to the new node
 *
 * Return: pointer to newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
	{
		return (NULL);
	}

	node_new->n = n;
	node_new->next = *head;

	*head = node_new;

	return (node_new);
}
