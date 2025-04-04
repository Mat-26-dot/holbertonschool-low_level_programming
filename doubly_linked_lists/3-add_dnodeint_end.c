#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: The header node
 * @n: integar value inside the variable
 *
 * Return: Return: The address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp; /* Step 1. Create new node */

	new_node = malloc(sizeof(dlistint_t));/* Malloc for new_node*/

	if (new_node == NULL) /* if malloc fails return (NULL) */
		return (NULL);

	new_node->n = n;
	new_node->next = (NULL); /* Set next ptr to NULL - last node */

	if (*head == NULL)  /* Step 2. Handle empty list */
	{
		new_node->prev = (NULL); /* No previous node */
		*head = new_node; /* Set head to point to the new node */
			return (new_node); /* Return the address of the new node */
	}
	temp = *head;
	/* Step 3. Traverse to the end of the list */
	while (temp->next != NULL)
	/* Move to the last node */
	next->temp = new_node;
	temp = temp->next;

	/* Step 4: Update pointers to add the new node at the end */
	temp->next = new_node;	/* Last node's next points to the new node */
	new_node->prev = temp;	/* New node's prev points to the last node */

	return (new_node); /* Step 5. Return address of newly added node */
}
