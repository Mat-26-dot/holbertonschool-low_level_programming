#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - lists the length of a string
 * @h: Pointer to the head of the linked lis
 *
 * Return: Return the total count of the string length
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0; /* Initialize counter */
	const list_t *current = h; /* Assign tmp pointer so trav begins@ first node */

	if (h == NULL) /* Checks if list is empty */
		return (0);

	while (current != NULL) /* Traverse lists */
	{
		counter++; /* Increment counter */
		current = current->next; /* Move to next node */
	}

	return (counter); /* Return total count */
}
