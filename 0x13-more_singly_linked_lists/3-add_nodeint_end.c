#include "lists.h"

/**
 * add_nodeint_end - appends a new node to the end.
 * @head: pointer to the list's head
 * @b: the integer to be stored in the new node
 *
 * Return: the address of the newly appended node.
 */

listint_t *add_nodeint_end(listint_t **head, const int b)
{
	listint_t *new_node;
	listint_t *cursor = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->b = b;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;

		cursor->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
