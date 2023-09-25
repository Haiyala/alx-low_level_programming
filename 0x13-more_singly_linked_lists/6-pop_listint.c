#include "lists.h"
/**
 * pop_listint - Removes the initial node of a listint_t linked list
 * @head: A double pointer to the list's head
 *
 * Return: The data (n) of the removed head node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptraux;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	ptraux = (*head)->next;
	free(*head);
	*head = ptraux;

	return (n);
}
