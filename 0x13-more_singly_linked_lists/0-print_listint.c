#include "lists.h"
/**
 * print_listint - Outputs all the elements.
 * @h: A constant pointer to a listint_t structure
 *
 * Return: The count of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
