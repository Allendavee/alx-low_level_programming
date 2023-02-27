#include "main.h"

/**
 * puts_half - Function that prints half of a string
 * @str: Pointer to a string to print
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, temp;
	int f_length;

	while (str[len] != '\0')
	{
		len++;
	}

	f_length = len;

	if (len % 2 != 0)
	{
		temp = (len - 1) / 2;
	}
	else
	{
		temp = len / 2;
	}

	for (temp++; temp < f_length; temp++)
	{
		_putchar(str[temp]);
	}

	_putchar('\n');
}
