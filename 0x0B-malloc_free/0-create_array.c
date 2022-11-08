#include "main.h"

/**
 * create_array - prints string
 * @size: size of array
 * @c: character
 *
 * Return: 0.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(c));
	if (array == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)
		{
			*(array + position) = c;
			position++;
		}

		return (array);
	}
}
