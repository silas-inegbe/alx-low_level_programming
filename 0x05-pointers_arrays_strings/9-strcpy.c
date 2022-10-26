#include "main.h"
#include <stdio.h>

/**
 * _strcpy - A function that copies strings
 * @dest: a buffer to copy string to
 * @src: The source string
 *
 * Return: The pointer to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}

	return (dest);
}
