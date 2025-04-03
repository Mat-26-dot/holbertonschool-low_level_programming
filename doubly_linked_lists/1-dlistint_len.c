#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - lists the length of a string
 * @h: Pointer to the head of the linked list
 * Return: Return total count of the string length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;		 /* Step 1. Iniialize counter */
	const dlistint_t *current = h;/*Step 2. Assign *tmp, trvse begins @ 1st node*/

	if (h == NULL)			/* Step 3. Checks if list is empty */
		return (0);

	while (current != NULL)		/* Step 4. Traverse through list */
	{
		counter++;		/* Step 5. Increment counter */
		current = current->next;/* Step 6. Move to next node */
	}

	return (counter);		/* Step 7. Return total counter */
}
