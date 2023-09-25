#include "lists.h"

/**
 * print_listint - Outputs all the elements in a listint_t list.
 * @h: A pointer to the list.
 * Return: The count of nodes in the list
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node)
	{
		printf("%i\n", node->n);
		count++;
		node = node->next;
	}

	return (count);
}
