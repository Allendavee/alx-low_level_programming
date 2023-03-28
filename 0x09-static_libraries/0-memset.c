#include "main.h"

/**
 * _memset - Function that fills memory with a constatnt
 * byte.
 * @s: Pointer to string
 * @b: Data to set
 * @n: Number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
