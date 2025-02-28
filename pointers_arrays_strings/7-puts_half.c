#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line.
 * @str: input string.
 */
void puts_half(char *str)
{
	int len = 0, start;


	while (str[len] != '\0')
	{
		len++;
	}


		start = (len + 1) / 2;


	while (str[start] != '\0')
	{
		_putchar(str[start]);
			start++;n
	}

	_putchar('\n');
}
