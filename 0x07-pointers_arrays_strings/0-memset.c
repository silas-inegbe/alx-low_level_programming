#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: memory byte
 * @b: constant filled
 * @n: byte filled
 *
 * Return: 0;
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *s, b;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
