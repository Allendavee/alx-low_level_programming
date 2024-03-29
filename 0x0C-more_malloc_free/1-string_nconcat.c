#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that Concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes.
 *
 * Return: pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		ptr[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptr[len++] = s2[i];

	ptr[len] = '\0';

	return (ptr);
}
