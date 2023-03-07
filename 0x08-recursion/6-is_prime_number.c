#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the input
 * integer is prime number, otherwise return 0
 * @n: Integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 3));
	}
}

/**
 * is_prime_helper - Helper function for Prime number function
 * @n: First Integer
 * @d: Second Integer
 * Return: Helper function
 */

int is_prime_helper(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	else if (n % d == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, d + 2));
	}
}
