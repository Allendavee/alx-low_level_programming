#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13
 * @str: Pointer to string
 * Return: str
 */
char *rot13(char *str)
{
	int i, j;

	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = (j + 13) % 26 + ((str[i] >= 'a') ? 'a' : 'A');
				break;
			}
		}
	}

	return (str);
}
