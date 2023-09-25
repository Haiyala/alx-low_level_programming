#include "lists.h"
/**
 * free_listint2 - Deallocates memory used by a listint_t
 * @head: A double pointer to the list's head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *newhead;

	if (head == NULL)
		return;

	newhead = *head;
	while (newhead)
	{
		newhead = newhead->next;
		free(*head);
		*head = newhead;
	}
	*head = NULL;
}
