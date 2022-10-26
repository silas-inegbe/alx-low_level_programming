#include "main.h"
#include <stdio.h>
/**
 * _atoi - A function that converts a string to integer
 * @s: string to be converted
 * Return: integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '_')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
