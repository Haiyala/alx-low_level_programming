#include "lists.h"
/**
 * reverse_listint - Inverts the order of a listint_t linked list
 * @head: A double pointer to the list's head
 * Return: A pointer to the initial node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	(*head) = prev;
	return (*head);
}
