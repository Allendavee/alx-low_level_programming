#include "main.h"

/**
 * _strlen_recursion - Function that returns the length
 * of a string
 * @s: Pointer to string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * helper - Helper function for paliandrome
 * @s: pointer to string
 * @l: Integer
 * Return: boolena
 */

int helper(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (helper(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - Functio that returns 1 if a string
 * is palindrome and 0 if not
 * @s: Pointer to string
 * Return: palindrome
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (helper(s, len - 1));
}
