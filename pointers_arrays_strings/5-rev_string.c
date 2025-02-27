#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: Nothing. The string is reversed in-place.
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

}
