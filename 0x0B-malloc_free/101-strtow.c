#include <stdlib.h>
#include "main.h"

#define MAX_WORDS 1000
#define MAX_WORD_LEN 1000

/**
 * strlen - Function that returns length of a string
 * @s: Pointer to string
 * Return: The length of the string
 */
int strlen(char *s)
{
	int len = 0;

	while (*s++ != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * strcpy - Function that copies a string
 * @dst: Pointer to string
 * @src: Second pointer to string
 * Return: void
 */

void strcpy(char *dst, char *src)
{
	while (*src != '\0')
	{
		*dst++ = *src++;
	}
	*dst = '\0';
}

/**
 * strcmp - Function that compare two strings
 * @s1: First pointer to string
 * @s2: Second pointer to string
 * Return: 0 if equal, -1 if @s1 is less than @s2
 * and 1 if @s1 is greater
 */
int strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((*s1 == *s2) ? 0 : ((*s1 < *s2) ? -1 : 1));
}

/**
 * strtow - Function that splits a string into two
 * @str: The string to split
 * Return: pointer to the array
 */

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);
	char **words;

	words = (char **) malloc((MAX_WORDS + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	int word_count = 0;
	char *word_start = str;
	char *p = str;

	while (*p != '\0' && word_count < MAX_WORDS)
	{
		if (*p == ' ')
		{
			int word_len = p - word_start;

			if (word_len > 0)
			{
				char *word;

				words = (char *) malloc((word_len + 1) * sizeof(char));
				if (word == NULL)
				{
					goto error;
				}
				strcpy(word, word_start);
				word[word_len] = '\0';
				words[word_count++] = word;
			}
			word_start = p + 1;
		}
		p++;
	}
	int word_len = p - word_start;

	if (word_len > 0 && word_count < MAX_WORDS)
	{
		char *word = (char *) malloc((word_len + 1) * sizeof(char));

		if (word == NULL)
			goto error;
		strcpy(word, word_start);
		word[word_len] = '\0';
		words[word_count++] = word;
	}
	words[word_count] = NULL;
	return (words);

error:
	for (int i = 0; i < word_count; i++)
	{
		free(words[i]);
	}
	free(words);
	return (NULL);
}
