#include "main.h"

/**
 * _strlen_recursion - Function that returns the length
 * of a string
 * @s: Pointer to string
 * Return: void
 */
int _strlen_recursive(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
