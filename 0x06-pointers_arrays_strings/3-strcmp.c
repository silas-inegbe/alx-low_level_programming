#include "main.h"
/**
 * _strcmp - a sfunction that compares two strings
 * @s1: first integer
 * @s2: second integer
 * Return: 1 if str1 and str2 are equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
