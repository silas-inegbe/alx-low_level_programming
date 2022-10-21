#include "main.h"

/**
 * print_most_numbers - entry point
 * Return: 0 -9, except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
