#include "lists.h"
/**
 * get_nodeint_at_index - Retrieves the node
 * @head: A pointer to the start of the listint_t list
 * @index: The position of the node (starting at 0)
 * Return: The node at the given position in the listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthnode;
	unsigned int counter;

	counter = 0;
	nthnode = head;

	while (nthnode != NULL)
	{
		if (counter == index)
			return (nthnode);
		counter++;
		nthnode = nthnode->next;
	}
	return (NULL);
}
