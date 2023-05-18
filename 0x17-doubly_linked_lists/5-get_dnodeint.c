#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linked list
 *
 * @head: pointer to the head of a dlistint_t list
 * @index: the index of the list to be returned
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}

	return (NULL);
}
