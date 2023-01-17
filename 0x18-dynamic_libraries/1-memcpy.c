#include "main.h"

/**
 * _memcpy - A fuction that copies memory area
 * @n: integer
 * @src: source
 * @dest: destination
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
