#include "main.h"
#include <stdio.h>

/**
 * main - prints all argument
 * @argc: number of command line argument
 * @argv: array name
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
