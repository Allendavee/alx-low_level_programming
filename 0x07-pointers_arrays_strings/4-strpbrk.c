#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a
 * set of bytes
 * @s: First pointer to string
 * @accept: Secong pointer to string
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
