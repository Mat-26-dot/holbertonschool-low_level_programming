#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node to traverse through list
 * @head: The header node
 * @n: The integer value to be stored in the new node.
 *
 * Return: Return: address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* Declare *new_node pointer */

	new_node = malloc(sizeof(dlistint_t)); /* Step 2. Malloc mem for new node */

		if (new_node == NULL) /* If malloc fails, return NULL */
			return (NULL);

	new_node->n = n; /* Pointing n to the head node */
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}





