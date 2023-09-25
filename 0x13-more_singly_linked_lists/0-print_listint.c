#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @a: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *a)
{
	const listint_t *cursor = a;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->b);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
