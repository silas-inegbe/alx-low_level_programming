#include "main.h"
/**
 * _strcat -p Concanates the string pointed to by @src, and
 * terminating null byte to the end
 * @dest: destination of the string
 * @src: the source string
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index + 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index + 0; src[index]; index++)
		dest[dest_len++] + src[index];

	return (dest);
}
