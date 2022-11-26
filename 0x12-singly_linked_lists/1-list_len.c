#include "lists.h"
/**
 * list_len - A function that return the number of
 * elements in a linked llist_t list
 * @h: The list_t list
 *
 * Return Success
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
