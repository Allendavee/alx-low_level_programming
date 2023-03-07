#include "main.h"

/**
 * set_string - Function that sets the value of a
 * pointer to a char
 * @s: Pointer to pointer string
 * @to: Pointer to string
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
