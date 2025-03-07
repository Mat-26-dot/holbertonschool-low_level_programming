#include "main.h"
#include <stdio.h>

 /**
 * _strspn - Calculates the length of a prefix substring.
 * @s: The main string to check, expected to be null-terminated.
 * @accept: The string containing the characters to match,
 * also null-terminated.
 *
 * Return: The number of bytes in the initial segment of `s` that
 *         consists entirely of characters from `accept`.
 *         The function stops counting when it encounters a character
 *         in `s` that is not in `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int  i = 0, count = 0;
	int match;
	int j;

	while (s[i] != '\0')
	{
		match = 0;

		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				match = 1;
				break;
		}
		j++;

		}

		if (!match)
		break;

		i++;
	}

	return (count);

}
