#include <stdio.h>

/**
 * main - prints all single digit
 * numbers of base 10 starting from
 * 0, followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (i < 10);
	printf("\n");
	return (0);
}
