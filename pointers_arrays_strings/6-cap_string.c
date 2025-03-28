#include "main.h"

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to check
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{

		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: Pointer to the changed string
 */
char *cap_string(char *str)
{
	int i, capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{

	if (is_separator(str[i]))
	{
		capitalize_next = 1;
	}

		else if (capitalize_next && islower(str[i]))
	{
		str[i] = toupper(str[i]);
		capitalize_next = 0;
	}
	else
	{
		capitalize_next = 0;
	}
}

		return (str);
}
