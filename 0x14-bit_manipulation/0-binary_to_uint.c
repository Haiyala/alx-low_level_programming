#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: Pointer to a binary string
 * Return: The equivalent unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		num += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}


	return (num);

}
