#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenate two strings
 *@s1: first string to be concatenated
 *@s2: second string to be concatenated
 *@n: maximum number of bytes to use from s2
 *Return: new_string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *new_string;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1])
	len1++;
	while (s2[len2])
	len2++;

	if (n > len2)
	n = len2;

	new_string = malloc(sizeof(char) * (len1 + n + 1));
	if (new_string == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	new_string[i] = s1[i];
	for (j = 0; j < n; j++, i++)
	new_string[i] = s2[j];
	new_string[i] = '\0';

	return (new_string);
}
