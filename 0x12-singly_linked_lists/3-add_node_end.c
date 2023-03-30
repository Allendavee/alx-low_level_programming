#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: string to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *last_node = NULL;
	char *str_copy = NULL;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	str_copy = strdup(str);

	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_copy;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
