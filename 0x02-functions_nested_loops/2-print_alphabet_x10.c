#include "main.h"
 /**
  * print_alphabet_x10 - prints 10x the alphabet
  * Description: prints alphabet
  * Return: 0
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
