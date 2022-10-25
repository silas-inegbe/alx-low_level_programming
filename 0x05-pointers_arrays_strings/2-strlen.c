#include "main.h"
/**
 * _strlen - A function that returns the lenght of a string
 * @s: first integer
 * Return: 0
 */
int _strlen(char *s)
{

	int count = 0;

	while (*s++)
		count++;

	return (count);
}
