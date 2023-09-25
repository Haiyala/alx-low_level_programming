#include "lists.h"
/**
 * free_listint - Deallocates memory used by a listint_t
 * @head: A pointer to the beginning of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *firstnode;

	while (head != NULL)
	{
		firstnode = head;
		head = head->next;
		free(firstnode);
	}
}
