#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13
 * @str: Pointer to string
 * Return: str
 */
char *rot13(char *str)
{
	int i = 0, j;

	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letters[i])
			{
				str[i] = rot13[i];
				break;
			}
		}
		i++;
	}

	return (str);
}
