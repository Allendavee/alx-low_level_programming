#include "main.h"

/**
 * puts_half - Function that prints half of a string
 * @str: Pointer to a string to print
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
		i = len / 2;
	else
		i = (len - 1) / 2;

	for (i++; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
