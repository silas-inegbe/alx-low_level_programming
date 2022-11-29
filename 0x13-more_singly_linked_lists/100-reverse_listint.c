#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t list
 * @head: A pointer to the head
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, behind;

	if (head == NULL || *head == NULL)
		return (NULL):

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behhind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
