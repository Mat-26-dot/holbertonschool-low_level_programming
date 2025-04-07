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

	/* Step 1. Allocate memory for the new_node */
	new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL) /* If malloc fails, return NULL */
			return (NULL);

	/* Step 2. Assign values to the new node */
	new_node->n = n;         /* Set the integar value */
	new_node->prev = NULL;   /* Set prev pointer to NULL (first node) */
	new_node->next = *head;  /* Point next to the current head */

	/* Step 3. Update the current head's prev pointer if list is not empty */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Step 4. Update head to point to the new node */
	*head = new_node;

	return (new_node);
}
