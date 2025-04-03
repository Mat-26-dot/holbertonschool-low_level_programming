#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: Return the total number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0; /*Initialize counter for number of nodes */

	while (h != NULL) /* Travese the list until the end (NULL) */
	{
		printf("%d\n", h->n); /* Print the data of the current node */
		h = h->next;	/* Move to the next node in the list */
		count++;	/* Increment the counter */
	}

	return (count); /* Return the total number of nodes */
}
