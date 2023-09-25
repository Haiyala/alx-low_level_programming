#include "lists.h"

/**
* checker - Checks for a loop in a linked list.
* @head: the head node
*
* Description: This function checks for the presence of a loop.
* Return: Returns either NULL or the location where a loop exists.
* A: We create two pointers, both starting at the head.
* B: The leading pointer advances by two steps.
* C: If the leading pointer cannot advance.
* D: If the lagging pointer ever matches the leading
*/

listint_t *checker(listint_t *head)
{
	listint_t *lagging = NULL;
	listint_t *leading = NULL;

	lagging = leading = head;
	while (lagging)
	{
		lagging = lagging->next;
		leading = leading->next;
		if (leading && leading->next)
			leading = leading->next;
		else
			return (NULL);
		if (lagging == leading)
			return (leading);
	}
	return (NULL);
}

/**
* find_listint_loop - Locates the start of a loop in a linked list.
* @head: the head node
*
* Description: This function detects the start of a loop
* Return: The address of the loop's start node
* A: If the check and lead values match, it's a loop, return head.
* B: If the check matches head, it's a loop.
* C: Increment head and re-run the check.
*/

listint_t *find_listint_loop(listint_t *head)
{
	while (checker(head))
	{
		if (checker(head) == head)
			return (head);
		head = head->next;
	}
	return (NULL);
}
