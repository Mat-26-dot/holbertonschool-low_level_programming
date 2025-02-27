#include "main.h"

/**
 *_ strlen - Returns the lenghth of a string
 *
 * @s: Pointer to the string whose length is to be determined
 *
 * Return: The length of the string (number of characters before '\0')
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
