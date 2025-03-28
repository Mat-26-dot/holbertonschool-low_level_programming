#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @s: input string to be encoded
 *
 * Return: (s) returned the modified string
 */
char *leet(char *s)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leet_letters[j])
			{
			s[i] = leet_numbers[j];
			break;
			}
		}
	}
	return (s);
}
