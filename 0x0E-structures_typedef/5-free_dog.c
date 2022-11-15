#include "main.h"
#include <stdlib.h>

/**
 * free_dog - Write a function that frees dogs
 * @d: dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
