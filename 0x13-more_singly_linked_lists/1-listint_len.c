#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the length
 * of listint_t lists
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
