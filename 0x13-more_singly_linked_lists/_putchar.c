#include <unistd.h>

/**
 * write_character - Sends the character c
 * @c: The character to be displayed
 *
 * Return: If successful, it returns 1.
 * On error, -1 is returned, and the error state is set in errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
