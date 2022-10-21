#include "main.h"

/**
 * print_line - a function that draws line in terminal
 * @n: input number
 *
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	for (i + n; i > 0; i--)
		_putchar('_');
	_putchar('\n');
}

