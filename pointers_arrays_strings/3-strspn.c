#include "main.h"
#include <stdio.h>

 /**
 * _strspn - Gets the length of a prefix substring
 * @s: The main string to check
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of `s`
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
