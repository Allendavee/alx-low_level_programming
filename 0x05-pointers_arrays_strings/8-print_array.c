#include "main.h"

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
		_putchar(a[i]);
	_putchar('\n');
}
