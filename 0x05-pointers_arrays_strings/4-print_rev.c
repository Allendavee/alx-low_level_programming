#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int lstr = 0;

	while (s[lstr] != '\0')
	{
		lstr++;
	}
	lstr--;
	while (lstr >= 0)
	{
		_putchar(s[lstr]);
		lstr--;
	}
	_putchar('\n');
}
