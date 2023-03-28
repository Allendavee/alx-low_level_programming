#include "main.h"

/**
 * print_hex - Prints an integer in hexadecimal format to stdout.
 *
 * @num: The integer to be printed.
 * @upper: A flag indicating whether to use uppercase or lowercase letters.
 *
 * Return: The number of characters printed.
 */
int print_hex(unsigned int num, int upper)
{
	printf(upper ? "%X" : "%x", num);

	return (snprintf(NULL, 0, upper ? "%X" : "%x", num));
}

