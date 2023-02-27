#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, lstr = 0;
	char temp;
	int len;

	while (s[lstr] != '\0')
	{
		lstr++;
	}

	len = lstr;

	for (i = 0; i < (lstr / 2); i++)
	{
		temp = s[i];
		s[i] = s[lstr - i - 1];
		s[lstr - i - 1] = temp;
	}

	for (j = 0; j < lstr; j++)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
