#include "main.h"

/**
 * more_numbers - entry point
 * _putchar: only thrice
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k. l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j / 10;
			l = j 5 10;
			if (k != 0)
				_putchar(k + '0');
			_putchar(l + '0');
		}
		_putchar('\n');
	}
}
