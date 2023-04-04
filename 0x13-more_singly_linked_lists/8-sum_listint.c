#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data(n)
 * of a listint_t linked list
 * @head: Pointer to the head node of the list
 *
 * Return: Sum of all the data or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
