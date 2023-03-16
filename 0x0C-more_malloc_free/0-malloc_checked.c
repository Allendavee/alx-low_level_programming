#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: unsigned integer
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return ptr;
}
