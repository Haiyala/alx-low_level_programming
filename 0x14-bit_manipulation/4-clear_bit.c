#include "main.h"

/**
 * clear_bit - Clears a bit at a specified index.
 * @n: Input number.
 * @index: Index to clear.
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
