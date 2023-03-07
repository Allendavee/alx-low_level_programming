#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural
 * square root of a number
 * @n: Integer
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Function that returns square root
 * @n: First integer
 * @m: Second Integer
 * Return: sqrt
 */

int _sqrt(int n, int m)
{
	if (n < 0)
		return (-1);
	if ((m * m) > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt(n, m + 1));
}
