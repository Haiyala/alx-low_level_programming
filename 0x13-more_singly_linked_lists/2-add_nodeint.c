#include "lists.h"

/**
 * add_nodeint - Prepends a new node to a listint_t list
 * @head: A pointer to the address of the list's head
 * @b: The integer value for the new node
 *
 * Return: NULL if the function fails
 */

listint_t *add_nodeint(listint_t **head, const int b)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->b = b;
	new->next = *head;

	*head = new;

	return (new);
}
