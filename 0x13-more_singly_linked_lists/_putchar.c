#include <unistd.h>

/**
 * _putchar - Outputs the character 'c' to output (stdout).
 * @c: The character to be printed
 *
 * Return: 1 on success.
 * On failure, it returns -1, and errno is set accordingly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
