#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string
 * in rverse
 * @s: Pointer to string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
