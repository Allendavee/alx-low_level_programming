#include "main.h"
#include <stdlib.h>

/**
 * my_memcpy - Copies a block of memory from one location to another
 *
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source buffer
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination buffer
 */
void *my_memcpy(void *dest, const void *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (unsigned int i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}

	return (dest);
}

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
	void *new_ptr = NULL;

	if (new_size == 0)
	{
		free(ptr);
	}
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
	}
	else if (new_size <= old_size)
	{
		new_ptr = ptr;
	}
	else
	{
		new_ptr = malloc(new_size);
		my_memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}

	return (new_ptr);
}
