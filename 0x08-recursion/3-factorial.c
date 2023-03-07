#include "main.h"

/**
 * factorial - Function that returns the factorial of
 * a given number
 * @n: Integer number
 * Return: -1 if lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
