#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Structure for a singly linked list
 * @b: An integer value for the node
 * @next: A pointer to the next node
 *
 * Description: Defines a singly linked list node structure.
 */

typedef struct listint_s
{
	int b;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *a);
size_t listint_len(const listint_t *a);
listint_t *add_nodeint(listint_t **head, const int b);
listint_t *add_nodeint_end(listint_t **head, const int b);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int b);
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
