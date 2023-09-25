#include "lists.h"

/**
* free_listint_safe - Safely deallocates memory used by a list.
* @h: A pointer to a pointer of the head.
*
* Description: This function safely frees the memory
* Return: the size of the list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t **array;
	unsigned int i = 0;
	unsigned int flag = 0;

	array = malloc(sizeof(listint_t *) * 1024);
	if (!array)
		exit(98);
	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == array[i])
			{
				flag = 1;
				break;
			}
			else
				flag = 0;
		}
		if (flag == 1)
			break;
		array[count] = *h;
		*h = (*h)->next;
		count++;
	}
	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
	*h = NULL;
	return (count);
}
