#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 * listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added, starting at 0.
 * @n: Integer to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node, *current_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;

	while (current_node != NULL && i < idx)
	{
		i++;
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL && i < idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node;
	prev_node->next = new_node;

	return (new_node);
}

