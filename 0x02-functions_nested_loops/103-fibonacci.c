#include <stdio.h>

/**
 * main - program that adds the even number in a
 * fibonacci sequence
 * Description: This program would add the sum of
 * even  number less than 4000000
 * Return: Always 0 (SUCESS(
 */
int main(void)
{
	int i;
	unsigned long int j, k, next_term, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next_term = j + k;
		j = k;
		k = next_term;
	}

	printf("%lu\n", sum);

	return (0);
}
