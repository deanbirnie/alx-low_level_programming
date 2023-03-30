#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 *
 * @head: pointer to the list head
 * @str: pointer to the string to duplicated and added to  the new node.
 *
 * Return: returns a pointer to the new node or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;
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
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
