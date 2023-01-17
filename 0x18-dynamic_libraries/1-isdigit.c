#include "main.h"

/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
<<<<<<< HEAD
	if (c >= '0') &&(c <= '9')
		return (1);
	else
=======
	if (c > 47 && c < 58)
		return (1);

>>>>>>> 97e47a6ad7fb0973cf072fc8ca6ca6059d02f38a
	return (0);
}
