#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Function that adds two numbers stores the
 * result in a buffer
 * @n1: First pointer to int.
 * @n2: Second pointer to int
 * @r: buffer that the function will use to store the result.
 * @size_r: Size of buffer
 * Return: the pointer to result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry, max_length, digit1, digit2, sum = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	max_length = i > j ? i : j;

	if (size_r <= max_length + 1)
		return (0);
	r[max_length + 1] = '\0';
	i--, j--, size_r--;
	digit1 = *(n1 + i) - 48, digit2 = *(n2 + j) - 48;
	while (max_length >= 0)
	{
		carry = digit1 + digit2 + sum;
		if (carry >= 10)
			sum = carry / 10;
		else
			sum = 0;
		if (carry > 0)
		*(r + max_length) = (carry % 10) + 48;
		else
			*(r + max_length) = '0';
		if (i > 0)
			i--, digit1 = *(n1 + i) - 48;
		else
			digit1 = 0;
		if (j > 0)
			j--, digit2 = *(n2 + j) - 48;
		else
			digit2 = 0;
		max_length--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
