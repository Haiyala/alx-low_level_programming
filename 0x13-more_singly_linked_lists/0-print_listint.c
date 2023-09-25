#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of a listint_t list.
 * @a: A pointer to the list's head.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *a)
{
	size_t nodes = 0;

	while (a)
	{
		nodes++;
		printf("%d\n", a->b);
		a = a->next;
	}

	return (nodes);
}
