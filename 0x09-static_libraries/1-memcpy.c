#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: First pointer to string
 * @src: Second pointer to string
 * @n: Number of bytes from memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
