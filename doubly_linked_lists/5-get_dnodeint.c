#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @index: Is the index of the node, starting from 0
 * @head: The head pointer
 * Return: If the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;	/* Initialize current */

	unsigned int count = 0; 

	if (head == NULL)	/* If head is NULL - Nothing to check */
		return (NULL);

	while (current != NULL)	/* Loop to traverse through list */
	{
	if (count == index)  /* Check the counter matches the index you're looking for */
		return (current); /*if so, return current*/

			current = current->next; /* Move to the next node and increment count */
			count++;
	}
			return (NULL);	/* this means the index exceeds the bounds of the list */
}
