#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @str: Pointer to string
 * Return: str
 */
char *leet(char *str)
{
	int i, j;

	char leet_map[] = "44330771";
	char letters[] = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (str[i] == letters[j] || str[i] == letters[j + 1])
			{
				str[i] = leet_map[j / 2];
				break;
			}
		}
	}

	return (str);
}
