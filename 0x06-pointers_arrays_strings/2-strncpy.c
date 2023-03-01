#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: First pointer to string
 * @src: Second pointer to string
 * @n: The number of character to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
