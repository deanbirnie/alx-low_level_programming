#include "lists.h"

/**
 * sum_dlistint - sums all data of a dlistint_t list
 *
 * @head: pointer to the head of a dlistint_t list
 *
 * Return: sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
