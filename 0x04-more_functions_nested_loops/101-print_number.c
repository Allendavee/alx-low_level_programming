#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: The number to check
 * Return: void
 */
void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / i >= 10)
	{
		i *= 10;
	}

	while (i > 0)
	{
		_putchar('0' + n / i);
		n %= i;
		i /= 10;
	}
}
