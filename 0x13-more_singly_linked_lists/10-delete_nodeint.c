#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index
 * of a listint_t linked list
 * @head: Pointer to a pointer to the head node of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if succeede, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *temp_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	while (temp_node != NULL && i < index)
	{
		prev_node = temp_node;
		temp_node = temp_node->next;
		i++;
	}

	if (temp_node == NULL)
		return (-1);

	prev_node->next = temp_node->next;
	free(temp_node);

	return (1);
}
