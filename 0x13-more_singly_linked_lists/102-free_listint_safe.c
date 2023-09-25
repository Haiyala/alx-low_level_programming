#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - unique nodes in looped linked list.
 * @head: Pointer to the listint_t head to check.
 *
 * Return: 0 if the list is not looped
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Safely frees a list, even with loops.
 * @a: Pointer to the address of the listint_t list's head.
 *
 * Return: Returns the count of nodes that were freed.
 *
 * Description: deallocates the list and sets the head to NULL.
 */
size_t free_listint_safe(listint_t **a)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*a);

	if (nodes == 0)
	{
		for (; a != NULL && *a != NULL; nodes++)
		{
			tmp = (*a)->next;
			free(*a);
			*a = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*a)->next;
			free(*a);
			*a = tmp;
		}

		*a = NULL;
	}

	a = NULL;

	return (nodes);
}
