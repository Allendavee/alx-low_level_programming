#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list
 * @h: Pointer to the first node of the list_t list
 *
 * Return: Numbeer of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
