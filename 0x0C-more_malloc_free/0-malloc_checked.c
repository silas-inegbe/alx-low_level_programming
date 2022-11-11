#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory usign
 * malloc
 * @b: The number of bytes of the allocated
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	exit(98);

	return (mem);
}
