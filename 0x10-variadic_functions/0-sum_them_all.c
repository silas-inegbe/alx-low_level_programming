#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Parameter passed to the function
 * @...: Arguments passed to the function
 *
 * Return: If n == 0, retun 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sums = 0;

	/* initialize valist for num number of arguments */
	va_start(nums, n);

	/* access all the arguments assigned to valist */
	for (index = 0; index < n; index++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);

	return (sum);
}
