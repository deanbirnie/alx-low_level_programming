#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to the head node of a listint_t list
 * @index: the node to be returned
 *
 * Return: the nth node or NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (head != NULL && i < index)
		{
			head = head->next;
			i++;
		}
	}
	return (head);
}
