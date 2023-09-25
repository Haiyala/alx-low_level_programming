#include "lists.h"
/**
 * delete_nodeint_at_index - Removes the node
 * @head: A double pointer to the head of the list
 * @index: The index of the node to be deleted
 * Return: 1 if the operation is successful, and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	unsigned int pos;

	pos = 0;
	while (*head)
	{
		if (pos == index)
		{
			node = (*head);
			(*head) = (*head)->next;
			free(node);
			return (1);
		}
		head = &(*head)->next;
		pos++;
	}
	return (-1);
}
