#include "main.h"

/**
 * _strchr - Function that locates a chracter in a string
 * @s: First pointer to string
 * @c: Character to check
 * Return: c if found and Null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
