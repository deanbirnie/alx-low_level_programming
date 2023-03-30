#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list_t list of nodes
 *
 * @head: pointer to the first node in the list
 * @str: pointer to the string to be duplicated and placed into the new node
 *
 * Return: pointer to the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node, *prev_node;
	char *cp_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	cp_str = strdup(str);
	if (cp_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	new_node->str = cp_str;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		prev_node = *head;
		while (prev_node->next != NULL)
		{
			prev_node = prev_node->next;
		}
		prev_node->next = new_node;
	}
	return (*head);
}
