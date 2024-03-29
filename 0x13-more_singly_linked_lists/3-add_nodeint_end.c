#include "lists.h"

/**
 * add_nodeint_end - Function that adds new node at the end of a
 * listint_t list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be added to the new node
 *
 * Return: The address to the new element and NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
