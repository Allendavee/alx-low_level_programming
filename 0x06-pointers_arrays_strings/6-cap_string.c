#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @str: Pointer to string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i, word_start;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
				|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
				|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"'
				|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
				|| str[i - 1] == '}')
		{
			word_start = i;
			if (str[word_start] >= 'a' && str[word_start] <= 'z')
			{
				str[word_start] -= 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	return (str);
}
