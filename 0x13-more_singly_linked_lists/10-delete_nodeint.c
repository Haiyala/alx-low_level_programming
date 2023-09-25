#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int x = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (x == index)
		{
			old_node = *head;
			if (x == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			previous_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((x + 1) == index)
			previous_node = *head;
		head = &((*head)->next);
		x++;
	}
	return (-1);
}
/**
 * listint_len - Calculates number of nodes in a linked list.
 * @a: Pointer to the head of the list.
 *
 * Return: The count of elements in the list.
 */
size_t listint_len(const listint_t *a)
{
	const listint_t *cursor = a;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
