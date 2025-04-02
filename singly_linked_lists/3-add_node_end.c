#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	
	unsigned int length = 0;
	
	/* Validate inputs */
	if (head == NULL || str == NULL)
	
	/* Allocate and validate new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate string and check for failure */
	new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
				return (NULL);
		}
		/* Calculate string length manually without using (strlen) */
		while (str[length] != '\0') 
		{		length++;
				new_node->len = length;
				
				/* Initialize next pointer */
				new_node->next = NULL;
		}
		/* Handle empty list case */
		if (*head == NULL)
		{
			*head = new_node;
				return (new_node);
		}
		/* Traverse to the last node */
		current = *head;
		while (current->next != NULL)
				current = current->next;

		/* Link new node at the end */
		current->next = new_node;

	return (new_node);
}
