#include <unistd.h>

/**
 * _putchar - writes a char to stdout
 * @c: the character to print
 *
 * Return: on sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
