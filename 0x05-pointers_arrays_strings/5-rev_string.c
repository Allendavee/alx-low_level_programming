#include "main.h"

/**
 * rev_string - Function that reverse a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int len, temp, div;
	char fstr, lstr;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	temp = len - 1;
	div = temp / 2;

	while (half >= 0)
	{
		fstr = s[temp - div];
		lstr = s[div];
		s[div] = fstr;
		s[temp - div] = lstr;
		div--;
	}
}
