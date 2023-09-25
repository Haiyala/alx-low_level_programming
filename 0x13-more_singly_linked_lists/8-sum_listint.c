#include "lists.h"
/**
 * sum_listint - Computes the sum of all data (n)
 * @head: a pointer to the head of the list
 * Return: 0 if the list is empty, or the sum of all the 'n'
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
