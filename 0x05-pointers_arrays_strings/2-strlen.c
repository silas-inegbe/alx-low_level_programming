#include "main.h"
/**
 * _strlen - A function that returns the lenght of a string
 * @s: first integer
 * Return: 0
 */
int _strlen(char *s)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
