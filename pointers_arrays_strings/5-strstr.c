#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring in a string using array
 * indexing with while loops
 * @haystack: The main string to search
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{

				if (haystack[i + j]

		!= needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	i++;
	}
	return (NULL);
}
