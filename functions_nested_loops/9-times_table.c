#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: Prints the 9x9 multiplication table in the specified format
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
	for (col = 0; col <= 9; col++)
	{
		product = row * col;

	/* Print comma and spaces before all numbers except first in row */
	if (col != 0)
	{
	_putchar(',');
	_putchar(' ');

	/* Add extra space for single-digit numbers */
		if (product < 10)
		_putchar(' ');
		}

		/* Print the number */
		if (product >= 10)
		{
		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
		}
		else
		{
		_putchar(product + '0');
		}
	}
	_putchar('\n');
	}
}
