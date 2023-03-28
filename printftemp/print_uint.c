#include "main.h"

/**
 * print_uint - Prints an unsigned integer to stdout.
 *
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_uint(unsigned int num)
{
	printf("%u", num);

	return (snprintf(NULL, 0, "%u", num));
}

