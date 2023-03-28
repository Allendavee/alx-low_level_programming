#include "main.h"

/**
 * print_octal - Prints an integer in octal format to stdout.
 *
 * @num: The integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_octal(unsigned int num)
{
	printf("%o", num);

	return (snprintf(NULL, 0, "%o", num));
}

