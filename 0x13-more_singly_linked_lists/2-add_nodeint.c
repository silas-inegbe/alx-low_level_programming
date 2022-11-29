#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list
 * @head: A pointer to the addr of thhe head of
 * list_t
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
