#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
