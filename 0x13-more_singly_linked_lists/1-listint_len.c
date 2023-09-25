#include "lists.h"
/**
 * listint_len - Calculates the count of elements
 * @h: A constant pointer to a listint_t structure
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t numele;

	numele = 0;
	while (h != NULL)
	{
		numele++;
		h = h->next;
	}
	return (numele);
}
