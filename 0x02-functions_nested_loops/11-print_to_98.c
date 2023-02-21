#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural number
 * from n to 98, followed by a new line
 * @n: Number to be printed
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	els
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
}
