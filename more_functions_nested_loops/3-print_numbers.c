#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Return: Always 0
 *
 * @: 0 to be checked
 *
 * @: 10 to be checked
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + 48);
		num++;
	}

	_putchar('\n');
}
