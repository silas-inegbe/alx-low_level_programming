#include "main.h"
#include <stdio.h>

/**
 * main - prints all argument
 * @argv: array name
 * @argc: command line argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int y, z;

	if (argc == 3)
	{
		y = atoi(argv[1]);
		z = atoi(argv[2]);

		printf("%d\n", y * z);
		return (0);
	}

	printf("Error\n");

	return (1);
}
