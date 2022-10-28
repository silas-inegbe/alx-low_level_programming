#include "main.h"
 
/**
 * _strcat - Concatenates two strings
 * @dest: destination of the string
 * @src: the source string
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int s;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}
