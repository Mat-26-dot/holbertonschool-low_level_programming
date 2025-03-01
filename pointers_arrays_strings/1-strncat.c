#include "main.h"
#include <stdio.h>
/**
 *_strncat - Concatenates at most n characters from src to dest
 *@dest: The destination string to which the characters will be appended
 *@src: The source string from which characters will be taken
 *@n: The maximum number of characters to appens from src
 *
 * Return: A pointer to the resulting string dest
  **/
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;


	while (dest[i] != '\0')
	{	i++;

	}


	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}


	dest[i] = '\0';

		return (dest);
}

