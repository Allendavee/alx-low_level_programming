#include "main.h"

/**
 * _islower - function that checksfor lowercase character
 * @c: Parameter that is used to check
 * Return: Always 0 (SUCCESS)
 */
int _islower(int c)
{
	if (c == 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c == 'A' && c <= 'Z')
	{
		return (0);
	}

	return (0);
}
