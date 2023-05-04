#include "main.h"

/**
 * get_endianness - Function that gets the endianness of a machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	y = (char *)&x;
	return (*y + 48);
}
