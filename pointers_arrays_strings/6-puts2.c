#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (i % 2 == 0)
		fwrite(&str[i], sizeof(char), 1, stdout);
	}
	fwrite("\n", sizeof(char), 1, stdout);

}
