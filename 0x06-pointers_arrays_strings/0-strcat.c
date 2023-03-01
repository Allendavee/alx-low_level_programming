#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: The pointer first string
 * @src: The pointer to second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *p;

	while (dest[len] != '\0')
	{
		len++;
	}
	p = dest + len;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
