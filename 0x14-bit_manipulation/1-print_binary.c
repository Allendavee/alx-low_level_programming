#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation
 * of a number.
 * @n: number to prints it's binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		putchar((n & 1) + '0');
	}
	else
	{
		putchar('0');
	}
}
