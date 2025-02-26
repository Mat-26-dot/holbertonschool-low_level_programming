#include "main.h"

/**
 *_ strlen - Returns the lenghth of a string
 *@s: Pointer to the string
 *
 * This function countsthe number of characters in the string
 * until it reaches the null terminator ('\0')
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
