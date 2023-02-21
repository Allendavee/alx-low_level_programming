#include "main.h"

/**
 * print_times_table - function that prints n times
 * table, starting with 0
 * @n: int value to prints the times table
 * Description: prints the times table of n value
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, times;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else if (times < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((times % 10) + '0');
				}
				else if (times >= 10 && times < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((times / 10) % 10 + '0');
					_putchar(times % 10 + '0');
				}
				else if (times > 99 && times < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(times / 100 + '0');
					_putchar((times / 10) % 10 + '0');
					_putchar(times % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
