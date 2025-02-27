#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints each character of the string
 * using _putchar() and adds a newline at the end.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		putchar(str[index]);
		index++;

	}
	putchar('\n');

}


