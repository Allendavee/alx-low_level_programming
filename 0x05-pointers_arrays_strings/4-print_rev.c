#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i, lstr = 0;
	char temp;

	while (s[lstr] != '\0')
	{
		lstr++;
	}

	for (i = 0; i < (lstr / 2); i++)
	{
		temp = s[i];
		s[i] = s[lstr - i - 1];
		s[lstr - i - 1] = temp;

		_putchar(s);
	}

	_putchar('\n');
}
