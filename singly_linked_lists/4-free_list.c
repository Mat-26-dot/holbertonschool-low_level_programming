#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a linked list of type list_t
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;        // Store the current node
		head = head->next; // Move to the next node
		free(temp->str);  // Free the string if dynamically allocated
		free(temp);	 // Free the node itself
	}
}
