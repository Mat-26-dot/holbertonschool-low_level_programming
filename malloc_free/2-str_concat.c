#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the newly allocated space containing the concatenated
 *         string. Returns NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat; /* Pointer to hold the concatenated string */
	int len1 = 0, len2 = 0, i, j;

    /* Handle NULL inputs by treating them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

    /* Calculate the length of s1 */
	for (i = 0; s1[i] != '\0'; i++)
		len1++;

    /* Calculate the length of s2 */
	for (j = 0; s2[j] != '\0'; j++)
		len2++;

    /* Allocate memory for the concatenated string (len1 + len2 + 1 for '\0')*/
	cat = malloc((len1 + len2 + 1) * sizeof(char));
	if (cat == NULL) /* Check if malloc failed */
	return (NULL);

    /* Copy characters from s1 into cat */
	for (i = 0; i < len1; i++)
	cat[i] = s1[i];

    /* Append characters from s2 into cat */
	for (j = 0; j < len2; j++, i++)
	cat[i] = s2[j];

    /* Add null terminator at the end of the concatenated string */
	cat[i] = '\0';

		return (cat); /* Return pointer to the concatenated string */
}
