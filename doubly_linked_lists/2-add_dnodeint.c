#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node to traverse through list
 * @head: The header node
 * @str: Length of the string
 *
 * Return: Return: address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* Declare *new_node pointer */

	unsigned int length = 0; /* Declare a variable to store string length */
	
	char *str;
	
	if (str == NULL)	/* Step 1. Parameter validation */
		return (NULL);

	new_node = malloc(sizeof(dlistint_t)); /* Step 2. Malloc mem for new node */

	if (new_node == NULL) /* If malloc fails, return NULL */
			return (NULL);

	while (str[length] != '\0') /* Step 3. Calc the length of the str manually */
		length++; /* Iterate count in string */

	new_node->len = length;
	new_node->next = *head;

	*head = new_node;

		return (new_node);
}





