#include "main.h"

/**
 * _pow_recursion - Function that returns the value
 * of x raised to the power of y
 * @x: First integer
 * @y: second integer
 * Return: x raisde to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
