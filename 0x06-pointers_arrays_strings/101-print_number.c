#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: Integer to print.
 * Return: void
 */
void print_number(int n)
{
	unsigned int m, d, i;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	i = 1;

	while (d > 9)
	{
		d /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
