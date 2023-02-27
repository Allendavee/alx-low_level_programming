#include "main.h"

/**
 * _puts - Function that prints a string, followed by
 * a new line.
 * @str: The pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{
	int lstr = 0, i;

	while (str[lstr] != '\0')
	{
		lstr++;
	}

	for (i = 0; i < lstr; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
