#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strdup - Creates a duplicate of the input string.
 *
 * This function allocates memory for a new string and
 * copies the contents
 * of the input string into it. It first calculates the
 * length of the input
 * string, then allocates memory for a new string of
 * the same length plus
 * one for the null terminator. If memory allocation is
 * successful, it copies
 * the contents of the input string to the new memory location.
 *
 *@str: A pointer to the string that needs to be duplicated
 *
 * Return: A pointer to the newly allocated duplicate string,
 *         or NULL if memory allocation fails or if str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup = malloc((i + 1) * sizeof(char));
		if (dup == NULL)
		{
			return (NULL);
		}
	for (j = 0; str[j] != '\0'; j++)
	{
		dup[j] = str[j];
	}
		dup[j] = '\0';
	}
		return (dup);
}
