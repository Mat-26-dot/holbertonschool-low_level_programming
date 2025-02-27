#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be measured.
 *
 * Description: This function iterates through the string
 *              until the null terminator is found.
 *
 * Return: The length of the string (excluding the null character)
 **/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
