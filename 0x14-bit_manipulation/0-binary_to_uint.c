#include "main.h"

/**
 * binary_to_uint - Convert binary string to unsigned integer.
 * @y: Pointer to the binary string.
 * Return: The converted unsigned integer.
 */
unsigned int binary_to_uint(const char *y)
{
	unsigned int base = 1, result = 0, len = 0;

	if (y == NULL)
		return (0);

	while (y[len])
		len++;

	while (len)
	{
		if (y[len - 1] != '0' && y[len - 1] != '1')
			return (0);

		if (y[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}
