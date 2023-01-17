#include "main.h"

/**
 * _abs - Entry point
 * @n: Integer
 *
 * Description: A function that computes the absolute value of an integer
 * Return: n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
