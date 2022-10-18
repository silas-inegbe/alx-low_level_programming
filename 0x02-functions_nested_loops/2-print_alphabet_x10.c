#include "main.h"
 /**
  * print_alphabet_x10 - main entry
  * Return: 0
  */
void print_alphabet_x10(void)
{
	char letters;
	int count = 0;

	while (count++ <= 9)
	{
		for (letters = 'a'; letters <+ 'z'; letters++)
			_putchar(letters);
		_putchar('\n');
	}
}
