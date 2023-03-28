#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: The pointer to char to check
 * Return: lenth of string
 */
int _strlen(char *s)
{
	int lstr;

	lstr = 0;

	while (s[lstr] != '\0')
	{
		lstr++;
	}

	return (lstr);
}
