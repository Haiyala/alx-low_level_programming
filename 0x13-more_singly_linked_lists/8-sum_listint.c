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
		sumofnodes(head, &sum);
		return (sum);
	}
	return (0);
}
/**
 * sumofnodes - Calculate the sum of nodes in a listint_t
 * @head: A pointer to the beginning of the listint_t list
 * @sum: An integer that accumulates the sum
 * Description: This function recursively computes
 * Return: The calculated sum of nodes.
 */
void sumofnodes(listint_t *head, int *sum)
{
	int n;

	if (!head)
		return;
	n = head->n;
	sumofnodes(head->next, sum);
	*sum = *sum + n;
}
