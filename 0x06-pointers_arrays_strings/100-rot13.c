#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: input string.
 * Return: the pointer to str.
 */

char *rot13(char *str)
{
	int i = 0, j;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == alphabets[j])
			{
				*(str + i) = rot13[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
