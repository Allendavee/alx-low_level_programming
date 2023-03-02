#include "main.h"

/**
 * _strcmp - Function that compare two strings
 * @s1: First pointer to string
 * @s2: Second pointer to string
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;
	result = 0;

	while (si[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			break;
		}
		result = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (result);
}
