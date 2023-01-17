#include "main.h"

/**
 * _strchr - A function that locates a string
 * @c: character
 * @s: string
 *
 * Return: pointer or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
