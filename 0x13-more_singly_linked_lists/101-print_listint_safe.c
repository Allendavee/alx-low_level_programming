/**
 * print_listint_safe - Prints a linked list of integers, handling loops
 * @head: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new_node, *hare;
	size_t count = 0;

	if (!head)
		exit(98);

	new_node = head;
	hare = head;
	while (hare && hare->next)
	{
		count++;
		printf("[%p] %d\n", (void *)new_node, new_node->n);
		new_node = new_node->next;
		hare = hare->next->next;
		if (new_node == hare)
		{
			head = head->next;
			count++;
			while (head != new_node)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
				count++;
			}
			printf("-> [%p] %d\n", (void *)new_node, new_node->n);
			break;
		}
	}
	printf("[%p] %d\n", (void *)new_node, new_node->n);
	count++;

	return (count);
}
