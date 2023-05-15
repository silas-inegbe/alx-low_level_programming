#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: Pointer to the first element of the array
 * @left: The first index of the sub-array to print
 * @right: The last index of the sub-array to print
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for (; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found or array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);

		middle = (left + right) / 2;

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}

