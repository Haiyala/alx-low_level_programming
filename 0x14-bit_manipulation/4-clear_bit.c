#include "main.h"

/**
 * clear_bit - Clears a bit at a specified index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit to clear.
 * Returns: 1 on success, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
