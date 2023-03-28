#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: First pointer to string
 * @needle: Second pointer to string
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *h = haystack + 1;
			char *n = needle + 1;

			while (*h != '\0' && *n != '\0' && *h == *n)
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}

	return (0);
}
