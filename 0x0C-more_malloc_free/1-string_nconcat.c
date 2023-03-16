#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Int bytes
 *
 * Return: result of full string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s1[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	ptr = malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (len1 + n); i++)
	{
		ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';

	return (ptr);
}
