#include "main.h"
#include <stdlib.h>

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
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	while (i <= max - min)
		ptr[i++] = n++;
	return (ptr);
}
