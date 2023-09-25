#include "lists.h"

/**
 * free_listint2 - Deallocates a linked list.
 * @head: Pointer to the list's head.
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
listint_t *cursor;
listint_t **temp = head;

if (temp != NULL)
{
while (*head != NULL)
{
cursor = *head;
free(cursor);
*head = (*head)->next;
}

*temp = NULL;

}
}
