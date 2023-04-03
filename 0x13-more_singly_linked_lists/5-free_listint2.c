#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
