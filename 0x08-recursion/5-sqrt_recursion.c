#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural
 * square root of a number
 * @n: Integer
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root =  _sqrt_recursion(n / 2);

		if (root * root == n)
		{
			return (root);
		}
		else if (root * root < n)
		{
			return (root + 1);
		}
		else
		{
			return (-1);
		}
	}
}
