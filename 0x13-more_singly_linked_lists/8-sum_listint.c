#include "lists.h"

/**
 *sum_listint - Calculates sum of all data in linked list.
 *@head: Pointer to the head of the list
 *
 *Return: Sum of the numbers in the list
 */

int sum_listint(listint_t *head)
{
listint_t *cursor = head;
size_t sum = 0;

while (cursor != NULL)
{
sum += cursor->b;
cursor = cursor->next;
}
return (sum);
}
