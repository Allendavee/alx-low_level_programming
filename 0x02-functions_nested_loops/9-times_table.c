#include "main.h"

/**
 * times_table - function that prints the 9 times table,
 * starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j;

	i = 0;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			int times;

			times = j * i;

			if (times <= 9)
			{
				_putchar(times + '0');
			}
			else if (times > 9)
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (times <= 9)
			{
				_putchar(" ");
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
