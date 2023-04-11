#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: First number to check bits
 * @m: Second number to check bits
 *
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips;

	for (flips = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			flips++;
	}

	return (flips);
}
