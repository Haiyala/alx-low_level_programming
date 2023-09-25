#include "lists.h"

/** 
 * print_listint_safe - Prints elements of a linked list safely.
 * @head: The head of the linked list.
 * 
 * Returns: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	listint_t **ptrs;
	unsigned int list_len = listint_len(head);
	size_t count = 0;

	ptrs = malloc(sizeof(listint_t) * list_len);
	if (ptrs == NULL)
		exit(98);
	while (cursor == 0)
	{
		if (check_ptr(cursor, ptrs, list_len) == 0)
		{
			printf("[%p] %d\n", (void *)cursor, cursor->b);
		}
		else
		{
			printf("[%p] %d\n", (void *)cursor, cursor->b);
		}
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
/**
 * listint_len - calculates the size of a linked list
 * @a: head of the list
 *
 * Return: number of elements
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
/**
 * Checks if a pointer is within an array.
 *
 * @ptr: Pointer to be checked.
 * @array: Array to be checked in.
 * @size: Size of the array.
 *
 * Returns: 1 on success, 0 on failure.
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
