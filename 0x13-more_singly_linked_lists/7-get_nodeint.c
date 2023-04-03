#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a listint_t
 * linked list
 * @head: Pointer to the head node in the listint_t list
 * @index: Index of the node
 *
 * Return: the nth node or NULL if node doesn't exit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
