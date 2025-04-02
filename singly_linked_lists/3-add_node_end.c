#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of list_t list
 * @str: needs to be duplicated
 * @head: header for list_t
 *
 * Return: Return the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* pointer for the new_node */
	list_t *current; /* Pointer for traversing list */

	list_t *new_node = malloc(sizeof(list_t)); /*Step 1.Allocate mem to new node*/

	if (new_node == NULL)
		return (NULL); /* Return NULL if mem fails */
	}
	new_node->str = strdup(str); /* Step 2. Duplicate string using strdup */

	if (new_node->str == NULL)
	{
		free(new_node); /* Free allocated mem for new mode */
			return (NULL);
	}
		new_node->next =  NULL;
	/* Step 3.Initialize pointer of new node to NULL, added at end of list */
		if (*head == NULL)
		{
			*head = new_node; /* Make new node at the head of the list */
				return (new_node);
		}
		current = *head; /* Make new node head of the list */
	while (current->next != NULL)
	{	/*If not empty, taverse till reach las node - next == NULL*/
		current = current->next; /* Move to the next node */
	}
		current->next = new_node; /* Current stops traversing when reaches NULL */

		return (new_node); /* Return pointer to newly created node*/
}
