#include "variadic_functions.h"

/**
 * sum_them_all - Function that return the sum of all its
 * parameters
 * @n: Number of arguments
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	var_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	var_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += var_args(args, int);
	}

	var_end(args);

	return (sum);
}
