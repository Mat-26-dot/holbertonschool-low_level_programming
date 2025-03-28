#include "main.h"
/**
 * cap_string - A function that capitalises the first letter
 * of each word in a string.
 * @s: The input string.
 * Return: The modified string.
 */
char *cap_string(char *s)
{
	int i = 0; /* Start at the first character of the string */
	char separators[] = " \t\n,.!?\"(){}"; /* List of separators */
	int sep_count; /* Used to check each separator */
	/* Loop through each character in the string until we reach null */
	while (s[i] != '\0')
	{
		/* Reset to check from first separator */
		sep_count = 0;
		/* If at the start of string, and letter is lowercase, */
		/* convert to uppercase */
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
		/* Convert char to uppercase by minus 32 from ASCII value */
			s[i] = s[i] - 32;
		}
		/* Loop through each separator in the list */
		while (separators[sep_count] != '\0')
		{
		/* If previous char is separator and current char is lowercase */
			if (i > 0 && s[i - 1] == separators[sep_count])
			{
				/* Capitalise the current letter */
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					/* Convert to uppercase */
					s[i] = s[i] - 32;
				}
			}
		sep_count++; /* Move to next separator */
		}
	i++; /* Move to the net character in the string */
	}
	return (s);
}
