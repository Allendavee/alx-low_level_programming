#include "main.h"

/**
 * reverse_array - Function that reverses the content of array
 * @a: Pointer to an array of ints
 * @n: Length of the array
 * Return: void
 */
void reverse_array(int *a, int *n)
{
	int i, temp;

	temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + i - 1);
		*(a + i - 1) = temp;
	}
}
