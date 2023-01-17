#include "main.h"
/**
 * _puts - A function that prints a string followed by a new line
 * @str: integer
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
