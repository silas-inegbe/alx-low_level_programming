#include "main.h"
#include <stdio.h>
/**
 * print_array _ A function that print arrays
 * @a: integer
 * @n: array to be printed
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int ab;

	for (ab = 0; ab < n; ab++)
	{
		printf("%d", a[ab]);

		if (ab == n -1)
			continue;

		printf(", ");
	}
	printf("\n");
}
