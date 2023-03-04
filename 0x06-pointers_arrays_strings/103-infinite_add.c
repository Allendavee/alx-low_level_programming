#include "main.h"
#include <stdio.h>
#include <string.h>

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
	int carry = 0, len1 = strlen(n1), len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 : len2;

	if (max_len + 1 > size_r)
		return (0);

	r[max_len + 1] = '\0';

	for (int i = 1; i <= max_len; ++i)
	{
		int digit1 = i <= len1 ? n1[len1 - i] - '0' : 0;
		int digit2 = i <= len2 ? n2[len2 - i] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}
		r[max_len - i + 1] = sum + '0';
	}
	if (carry)
	{
		r[0] = carry + '0';
		return (r);
	}
	else
	{
		return (r + 1);
	}
}
