#include "main.h"

/**
 * get_bit - Function that returns the value of a bit
 * at a given index
 * @n: Number to find the bit value
 * @index: index of the bit value
 *
 * Return: value of bit at index, -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int count;

	count = 0;
	if (index > 63)
		return (-1);
	while (n > 0)
	{
		if (count == index)
			return (n & 1);
		n = n >> 1;
		count++;
	}
	if (count < index)
		return (0);
	return (-1);
}
