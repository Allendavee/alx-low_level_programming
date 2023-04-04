#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t
 * linked list with a loop safely
 * @head: pointer to the 1st node of the linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new_node = NULL;
	const listint_t *current = NULL;
	size_t counter = 0, i;

	new_node = head;
	while (new_node != NULL)
	{
		printf("[%p] %d\n", (void *)new_node, new_node->n);
		counter++;
		new_node = new_node->next;
		current = head;
		i = 0;
		while (new_node < counter)
		{
			if (new_node == current)
			{
				printf("-> [%p] %d\n", (void *)new_node, new_node->n);
				return (counter);
			}
			current = current->next;
			i++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
