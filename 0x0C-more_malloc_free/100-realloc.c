#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: A pointer to the memory previously allocated
 * @old_size: The size in bytes of the allocated space for ptr
 * @new_size: The size in bytes of the allocated space for ptr
 *
 * Return: If new_size == old_size - ptr.
 *	If new_size == old_size - ptr.
 *	Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_Copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;

	free(ptr);
	return (mem);
}
