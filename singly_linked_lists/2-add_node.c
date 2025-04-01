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

	list_t *new_node = malloc(sizeof(list_t)); /* Allocate memory for new node */

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* Duplicate str using strdup */
	if (new_node->str == NULL)
	{

		free(new_node); /* Free allocated memory for the node */
			return (NULL);

		new_node->len = strlen(new_node->str); /*Store len of str */
		new_node->next = NULL; /* Initialize the next pointer to NULL*/

		new_node->next = *head;  /* Point the new node's next to the current head */

		*head = new_node; /* Update the head pointer to point to the new node */
		}
			return (new_node); /* Return the new node as confirmation of success */


}
