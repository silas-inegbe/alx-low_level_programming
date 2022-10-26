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
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
