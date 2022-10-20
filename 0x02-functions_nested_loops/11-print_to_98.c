#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry point
 * @n: An integer
 * Description: function that prints all natural numbers from 0 - 98 and new
 * Return: 0 (success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}

	else
	{
		printf("98");
	}
	printf("\n");
}
