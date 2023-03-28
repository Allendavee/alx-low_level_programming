#include "main.h"

/**
 * print_ptr - Prints a pointer to stdout.
 *
 * @ptr: The pointer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_ptr(void *ptr)
{
	printf("%p", ptr);

	return (snprintf(NULL, 0, "%p", ptr));
}

