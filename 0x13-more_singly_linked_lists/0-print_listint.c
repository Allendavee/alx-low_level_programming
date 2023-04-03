#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		printf("%d\n"curr->h);
		count++;
		curr = curr->next;
	}

	return (count);
}
