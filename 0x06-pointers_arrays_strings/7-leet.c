#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @str: Pointer to string
 * Return: str
 */
char *leet(char *str)
{
	int j = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + j) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + j) == low_letters[i] || *(str + j) == upp_letters[i])
			{
				*(str + j) = numbers[i];
				break;
			}
		}
		j++;
	}

	return (str);
}
