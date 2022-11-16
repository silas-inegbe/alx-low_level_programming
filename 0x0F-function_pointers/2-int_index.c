#include "function_pointers.h"

/**
 * int_index - Searches for integers
 * @array: array
 * @size: number of element in array
 * @cmp: is a pointer to the function to
 * to be used to compare values
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
