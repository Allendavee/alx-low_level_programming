#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments
 * of a program
 * @ac: Integeer argument count
 * @av: Pointer to pointer string
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
