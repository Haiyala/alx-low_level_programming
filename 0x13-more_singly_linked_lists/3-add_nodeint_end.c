#include "lists.h"
/**
 * add_nodeint_end - Appends a new node at the tail of a listint_t
 * @head: A double pointer to a listint_t structure
 * @n: The value to be added to the new node
 * Return: A pointer to the new node, or NULL in case of failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode_end;
	listint_t *firstnode;

	newnode_end = malloc(sizeof(listint_t));
	if (newnode_end)
	{
		newnode_end->next = NULL;
		newnode_end->n = n;
		if (!*head)
		{
			*head = newnode_end;
			return (newnode_end);
		}
		firstnode = *head;
		while (firstnode->next)
			firstnode = firstnode->next;
		firstnode->next = newnode_end;
		return (newnode_end);
	}
	free(newnode_end);
	return (NULL);
}
