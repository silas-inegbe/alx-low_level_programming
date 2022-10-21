#include "main.h"

/**
 * _isdigit - a function thst checks for a digit (0 through 9).
 * @c: number to be checked
 *
 * Return: return 1 if c is digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	       return (1);
	else
	return (0);
}
