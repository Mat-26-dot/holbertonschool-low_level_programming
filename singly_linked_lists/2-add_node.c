#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds node to traverse through list
 * @head: The header node
 * @str: Needs to be duplicated
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /*Declare *new_node at the top*/

	if (str == NULL) /* Step 1 - Parameter validation */
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* 2. Malloc mem for new node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* Step 3. Duplicate str using strdup */
	if (new_node->str == NULL)
	{
		free(new_node); /* Free allocated memory for the node */
			return (NULL);

		new_node->len = strlen(new_node->str); /* Step 4. Store string length */
		new_node->next = *head;  /* Point new node's next to current head */

		*head = new_node; /* Step 5. Update the head pointer to point to new node */
		}
			return (new_node); /* Return new node as confirmation of success */


}
