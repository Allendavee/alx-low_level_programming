#include "main.h"

/**
 * times_table - function that prints the 9 times table,
 * starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j, times, ones, towes;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times = i * j;
			twoes = times / 10;
			ones = times % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (times <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(twoes + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
