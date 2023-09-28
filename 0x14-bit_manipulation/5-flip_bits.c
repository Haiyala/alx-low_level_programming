#include "main.h"

/**
 * flip_bits - Counts bits to flip from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			total++;
		m = m >> 1;
		n = n >> 1;
	}

	return (total);
}
