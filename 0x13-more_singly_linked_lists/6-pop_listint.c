#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t
 * linked list, and returns the head node's data(n).
 * @head: Pointer to a pointer head node of a listint_t list
 *
 * Return: head node's data or return 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	*head = (*head)->next;
	n = current->n;
	free(current);

	return (n);
}
