#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit
 *
 * @c: Character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * error_exit - Prints an error message and exits with status 98
 */
void error_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Entry point
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, len1, len2;
	int *result;
	char *num1;
	char *num2;

	len1 = 0;
	len2 = 0;

	if (argc != 3)
		error_exit();

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]; i++)
		if (!_isdigit(num1[i]))
			error_exit();

	for (i = 0; num2[i]; i++)
		if (!_isdigit(num2[i]))
			error_exit();

	while (num1[len1])
		len1++;

	while (num2[len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
		error_exit();

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0');
			int pos1 = i + j;
			int pos2 = i + j + 1;
			int sum = product + result[pos2];

			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}

	i = 0;

	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	for (; i < len1 + len2; i++)
		printf("%d", result[i]);

	printf("\n");

	free(result);

	return (0);
}
