#include "main.h"

/**
 * clear_bit - Clears a bit at a specified index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit to clear.
 * Returns: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
