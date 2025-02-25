#include "main.h"
#include <stdio.h>
/**
 * print- check the code
 *
 * @: 0 to be checked
 *
 * @: 9 to be checked 
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{

	int num = 0;

	while (num < 10)
	{
	
		if (num != 2 && num != 4)
		{
			_putchar (num + 48);
			num++;
		}
	}
		_putchar('\n');
}
