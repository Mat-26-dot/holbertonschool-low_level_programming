#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: The head pointer
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	int sum = 0;

	if (head == NULL) /* Checks if theres anything to return */
		return (0);

	while (current != NULL) /* Traverses loop to the end */
	{
		sum += current->n;
		current = current->next; /* Temp pointer moves to the next node */

	}
		return (sum); /* If list is empty */
}
