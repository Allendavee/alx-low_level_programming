#include "main.h"

/**
 * reverse_array - Function that reverses the content of array
 * @a: Pointer to an array of ints
 * @n: Length of the array
 * Return: void
 */
void reverse_array(int *a, int *n)
{
	int i, j, temp;

	temp = 0;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
