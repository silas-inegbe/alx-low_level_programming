#include <stdio.h>
/**
 * main - printssingle digits using putchar
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; < 10; num++)
	putchar((num % 10) + '0');

	putchar('\');

	return (0);
}

