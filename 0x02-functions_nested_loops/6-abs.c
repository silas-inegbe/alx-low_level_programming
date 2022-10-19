#include "main.h"
 /**
  * _abs - a function that computes the absolute value of an integer
  * @n: n is an integer 
  * Description: prints the absolute value of an integer
  * Return: int
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
