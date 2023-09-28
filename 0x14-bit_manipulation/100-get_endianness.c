#include "main.h"

/**
 * get_endianness - Checks endianness.
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int y;
	char *z;

	y = 1;
	z = (char *) &y;

	return ((int)*z);
}
