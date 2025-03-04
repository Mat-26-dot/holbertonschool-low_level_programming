#include "main.h"
#include <stdio.h>

 /**
 *_strspn - Gets the length of a prefix substring
 * @s: The main string to check
 *@accept: The string containing the characters to match
 *
 * Description: This function calculates the number of bytes in the
 * initial segment of `s` consisting only of characters from `accept`.
 *
 * Return: The number of bytes in the initial segment of `s`
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
	found = 0;
	for (a = accept; *a != '\0'; a++)
	{
		if (*s == *a)
		{
		found = 1;
		break;
	}

	}
	if (found == 0)
		break;
	len++;
	s++;
	}

		return (len);
}
