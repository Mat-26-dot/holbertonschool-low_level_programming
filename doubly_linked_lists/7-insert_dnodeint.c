#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Data for the new node
 * Return: Address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	/* Case 1: Invalid head pointer or negative index (though idx is unsigned) */
	if (h == NULL)
		return (NULL);

	/* Case 2: Insert at head (idx = 0) */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse to find insertion point */
	current = *h;

	for (i = 0; current != NULL && i < idx - 1; i++)

		current = current->next;

	/* Case 3: Index out of bounds */
	if (current == NULL)
		return (NULL);

	/* Case 4: Insert at tail (idx = list length) */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Case 5: Insert in middle */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

		return (new_node);
}
