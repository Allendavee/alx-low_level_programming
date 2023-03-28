#include "main.h"

/**
 * print_str - Prints a string to stdout.
 *
 * @s: The string to be printed.
 *
 * Return: The number of characters printed (the length of the string).
 */
int print_str(const char *s)
{
	fputs(s, stdout);

	return (strlen(s));
}

