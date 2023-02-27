#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints n element of an array of
 * integers
 * @a: The pointer to integer to access array
 * @n: size of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	_putchar('\n');
}
