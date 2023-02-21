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

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				times = i * j;
				if (times > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((times / 100) + '0');
					_putchar(((times / 10) % 10) + '0');
					_putchar((times % 10) + '0');
				}
				else if (times > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((times / 10) % 10) + '0');
					_putchar((times % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(times + '0');
				}
			}
			_putchar('\n');
		}
	}
}
