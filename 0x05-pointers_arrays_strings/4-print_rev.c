#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: integer
 */
void print_rev(char *s)
{
	int index = 0;

	while (index >= 0)
	{
		if (s[index] == '\0')
			break;
		index++;
	}

	for (index--; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

