#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to array of integer
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0, n = min;

	if (min > max)
		return (0);
	ptr = malloc((max - min + 1) * sizeof(int));

	if (!ptr)
		return (0);
	while (i <= max - min)
		ptr[i++] = n++;
	return (ptr);
}
