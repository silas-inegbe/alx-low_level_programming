#include "main.h"
/**
 * reverse_array - a function that reverse arrays
 * @a: string
 * @n: integer
 *
 * Return: 0;
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = 0; index < n; index++)
	{
		n--;
		tmp = a[index];
		a[index] = a[n];
		a[n] = tmp;
	}
}
