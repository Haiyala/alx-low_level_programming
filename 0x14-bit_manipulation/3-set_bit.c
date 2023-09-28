#include "main.h"

/**
 * set_bit - Set a bit to 1 at a given index.
 * @n: pointer to an unsigned long int.
 * @index: index of the target bit.
 * Return: 1 on success, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
