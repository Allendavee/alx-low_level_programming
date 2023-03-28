#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: First pointer to string
 * @src: Second pointer to string
 * @n: Integer to use bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';

	return (dest);
}
