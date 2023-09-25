#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a new node.
 * @head: A pointer to the head of the list.
 * @idx: index where the new node should be inserted.
 * @b: The value to store in the new node.
 *
 * Return: address of newly added node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int b)
{
	listint_t *new_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int x = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || idx > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->b = b;
	new_node->next = NULL;
	while (head != NULL)
	{
		if (x == idx)
		{
			if (x == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = previous_node->next;
			previous_node->next = new_node;
			return (new_node);
		}
		else if ((x + 1) == idx)
			previous_node = *head;
		head = &((*head)->next);
		x++;
	}
	return (NULL);
}
/**
 * listint_len - Determines count of nodes in linked list.
 * @a: The head of the list.
 *
 * Return: The total number of elements in the list.
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
