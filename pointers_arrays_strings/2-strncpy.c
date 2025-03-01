#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies at most n characters from the string src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of characters to copy
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{

		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{

		dest[i] = '\0';
		i++;
	}

		return (dest);

}


