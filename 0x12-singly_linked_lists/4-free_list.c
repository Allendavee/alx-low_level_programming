#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list_t list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *curr_node = NULL;
	list_t *next_node = NULL;

	curr_node = head;

	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		free(curr_node->str);
		free(curr_node);
		curr_node = next_node;
	}
}
