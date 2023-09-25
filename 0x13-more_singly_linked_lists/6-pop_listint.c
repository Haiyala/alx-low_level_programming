#include "lists.h"

/**
 * pop_listint - Deletes the first node of a linked list.
 * @head: Pointer to the list's head.
 * Return: Data from the deleted node.
 */

int pop_listint(listint_t **head)
{
listint_t *popped;
int content;

if (*head == NULL)
return (0);

popped = *head;
content = popped->b;
free(popped);

*head = (*head)->next;
return (content);

}
