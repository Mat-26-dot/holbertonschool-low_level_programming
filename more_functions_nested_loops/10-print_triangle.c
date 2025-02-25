#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle followed by a new line
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* Print spaces */
		for (space = size - row; space > 0; space--)
			_putchar(' ');

		/* Print '#' */
		for (hash = 1; hash <= row; hash++)
			_putchar('#');

		_putchar('\n'); /* New line after each row */
	}
}
