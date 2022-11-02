#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - A function that prints the chess board
 * @a: integer
 *
 * Return: chessbord
 */
void print_chessboard(char (*a)[8])
{
	int ix1, ix2;

	for (ix1 = 0; a[ix1][7]; i++)
	{
		for (ix2 = 0; ix2 < 8; i++)
			_putchar(a[ix1][ix2]);

		_putchar('\n');
	}
}
