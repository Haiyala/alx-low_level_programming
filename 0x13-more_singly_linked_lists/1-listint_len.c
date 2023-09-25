#include "lists.h"

/**
 * listint_len - Counts the number of element.
 * @a: A pointer to the head of the list.
 *
 * Return:number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *a)
{
	size_t nodes = 0;

	while (a)
	{
		nodes++;
		a = a->next;
	}
	return (nodes);
}
