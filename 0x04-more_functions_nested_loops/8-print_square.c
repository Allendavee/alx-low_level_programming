#include "main.h"

/**
 * print_square - function that prints a square
 * followed by a new line
 * @size: The size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	i = 0;

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar(35);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
