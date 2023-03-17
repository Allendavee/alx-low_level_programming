#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function that reallocate a memory block
 * using malloc and free
 *
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: Pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cptr, *new_ptr;
	unsigned int i;

	if (ptr != NULL)
	{
		cptr = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(new_ptr + i) = cptr[i];
	}
	free(ptr);
	return (new_ptr);
}
