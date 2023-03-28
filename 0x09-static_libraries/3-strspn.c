#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix
 * substring
 * @s: First pointer to string
 * @accept: Second pointer to string
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;

	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				counter++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			return (counter);
		}
		s++;
	}

	return (counter);
}
