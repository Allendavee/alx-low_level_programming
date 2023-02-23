#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * followed by a new line
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");

	return (0);
}
