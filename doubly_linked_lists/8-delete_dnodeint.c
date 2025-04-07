#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at given index in dlistint_t list.
 * @head: Pointer to the head pointer of the list.
 * @index: Index of the node to delete (starting at 0).
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	/* Check if the list is empty or head is NULL */
	if (head == NULL || *head == NULL)
	return (-1);

	current = *head;

	/* Case 1: Deleting the first node (index 0) */
	if (index == 0)
	{
	*head = current->next;  /* Move head to the next node */
	if (*head != NULL) /* If new head exists, update its prev */
		(*head)->prev = NULL;
	free(current);          /* Free the old head */
	return (1);
	}

	/* Traverse to the node at the given index */
	for (i = 0; current != NULL && i < index; i++)

		current = current->next;

	/* If index is out of bounds, return -1 */
	if (current == NULL)
		return (-1);

	/* Update the previous node's next pointer */
	if (current->prev != NULL)
	current->prev->next = current->next;

	/* Update the next node's prev pointer (if it exists) */
	if (current->next != NULL)

		current->next->prev = current->prev;

	free(current);  /* Free the node to be deleted */
	return (1);
}
