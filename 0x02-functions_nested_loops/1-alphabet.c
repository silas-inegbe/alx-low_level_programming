#include "main.h"

/**
 * main - entry point
 * Description: a function that prinyts alphabet in lower case followed by new li
 * ne
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
