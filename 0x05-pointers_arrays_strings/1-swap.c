#include "main.h"

/**
 * swap_int - Function that swaps the value of two integers
 * @a: First pointer to integer
 * @b: Second pointer to integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *temp;

	*temp = &a;
	*a = &b;
	*b = &temp;
}
