#include "function_pointers.h"

/**
 * int_index - Function that searches for integer
 * @array: pointer to array to search
 * @size: Size of the array
 * @cmp: Pointer to a compare function
 *
 * Return: index of the element if cmp does not return 0
 * or return -1 if no match is found and size is less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
		{
			return (i);
		}
	}

	return (-1);
}
