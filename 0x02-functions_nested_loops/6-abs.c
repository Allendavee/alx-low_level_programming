#include "main.h"

/**
 * _abs - function that computes the absolute value of
 * an integer
 * @n: The value to be checked
 * Return: the value of n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
