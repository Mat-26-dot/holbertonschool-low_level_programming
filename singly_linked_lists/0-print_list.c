#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0; /* Initialize counter */
	const list_t *current = h; /* Temporary pointer for traversal */

	if (h == NULL) /* check if the list is empty */
		return (0);

	while (current != NULL) /* Traverse the list */
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");

		else	/*Print length of a string*/
			printf("[%u] %s\n", current->len, current->str);

		current = current->next;
		counter++; /* Increment node count */
	}

	return (counter); /* Return total node count */
}
