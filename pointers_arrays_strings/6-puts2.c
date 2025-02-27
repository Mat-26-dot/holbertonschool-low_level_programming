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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)

			printf("%c", str[i]);
	}

	printf("\n");
}
