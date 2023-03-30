#include "lists.h"

/**
 * free_list - free's the memory allocations for a list_t list
 *
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			free(current->str);
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	head = NULL;
}
