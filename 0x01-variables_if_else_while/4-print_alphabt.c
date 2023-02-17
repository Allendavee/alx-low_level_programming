#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Print all the letters except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q')
		{
			continue;
		}
		if (ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}		
	putchar('\n');
	return (0);
}
