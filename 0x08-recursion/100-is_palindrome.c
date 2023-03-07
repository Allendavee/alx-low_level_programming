#include "main.h"

/**
 * is_palindrome - Functio that returns 1 if a string
 * is palindrome and 0 if not
 * @s: Pointer to string
 * Return: palindrome
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}
	else if (s[0] != s[len - 1])
	{
		return (0);
	}
	else
	{
		s[len - 1] = '\0';
		return (is_palindrome(s + 1));
	}
}

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
