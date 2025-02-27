#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints out every character of the string until it reaches '\0'
 *
 * @str: The input string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);

		i += 2;
	}

	putchar('\n');
}
