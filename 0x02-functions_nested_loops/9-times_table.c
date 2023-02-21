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

			_putchar((times) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
