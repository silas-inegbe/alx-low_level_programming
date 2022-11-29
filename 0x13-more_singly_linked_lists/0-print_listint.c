#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints
 * all elements in listint_t list
 * @h: A pointer to the head of the listint_t
 *
 * Return: The number of Nodes in list_t
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
