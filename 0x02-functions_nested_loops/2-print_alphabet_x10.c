#include "main.h"

/**
 * print_alphabet_10x - Prints 10 times the alphabet, in lower case.
 *
 */

void print_alphabet_x10(void)
{
	char letters;
	int count = 0;

	while (count++ <= 9)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);
		_putchar('\n');
	}
}
