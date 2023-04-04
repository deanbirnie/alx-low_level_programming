#include "lists.h"

/**
 * sum_listint - sums all values in a listint_t list
 *
 * @head: pointer to the head of the listint_t list
 *
 * Return: the sum of all nodes values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
