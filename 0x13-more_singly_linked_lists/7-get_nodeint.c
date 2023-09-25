#include "lists.h"

/**
* get_nodeint_at_index - Returns the node of a linked list.
* @head: Pointer to the list's head.
* @index: The index of the desired node.
*
* Return: The address of the requested node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *cursor = NULL;
unsigned int x = 0;

while (head != NULL)
{
if (x <= index)
{
if (x == index)
{
cursor =  head;
break;
}
head = head->next;
x++;
}
else
return (NULL);
}
return (cursor);
}
