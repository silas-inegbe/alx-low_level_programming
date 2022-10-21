#include "main.h"

/**
 * print_line - a function that draws line in terminal
 * @n: input number
 *
 * Return: a straight line
 */
void print_line(int n)
{
	int co;

	for (co = n; co > 0; co--)
			_putchar('_');
		_putchar('\n');
}
