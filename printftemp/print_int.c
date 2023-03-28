#include "main.h"

/**
 * print_int - Prints an integer to stdout.
 *
 * @num: The integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_int(int num)
{
	printf("%d", num);

	return (snprintf(NULL, 0, "%d", num));
}

