#include "main.h"

/**
 * puts2 - A function that prints the character of
 * every other string
 * @str: integer
 *
 * Return: 0
 */
void puts2(char *str)
{
	int a = 0, int b = 0;

	while (str[a++])
		b++;

	for (a = 0; a < b; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
