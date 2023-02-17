#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Print all the letters except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	do {
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
