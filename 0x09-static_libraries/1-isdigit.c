#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * (0 through 9)
 * @c: The value to check
 * Return: 1 if digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
