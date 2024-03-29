#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked
 * listint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the lists
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
