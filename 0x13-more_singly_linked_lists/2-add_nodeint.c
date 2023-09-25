#include "lists.h"
/**
 * add_nodeint - Inserts a new node at the start
 * @head: A double pointer to listint_t structure
 * @n: The integer value to be stored in the new element
 * Return: The address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
