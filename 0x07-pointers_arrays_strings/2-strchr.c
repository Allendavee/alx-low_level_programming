#include "main.h"

/**
 * _strchr - Function that locates a chracter in a string
 * @s: First pointer to string
 * @c: Character to check
 * Return: c if found and Null if not found
 */
char *_strchr(char *s, char c)
{
	int i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		else
		{
			return ('\0');
		}
	}
}
