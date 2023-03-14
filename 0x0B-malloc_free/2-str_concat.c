#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: Pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	char *result = malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		reult[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
