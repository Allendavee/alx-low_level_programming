#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that print the sume of the two
 * diagonals of a square matrix of integers.
 * @a: Pointer to array
 * @size: Size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	for ( ; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d %d\n", sum1, sum2);
}
