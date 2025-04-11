#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int row, col, product;

	/* Outer loop for rows (0-9) */
	for (row = 0; row <= 9; row++)
	{
	/* Inner loop for columns (0-9) */
	for (col = 0; col <= 9; col++)
	{
		product = row * col;

		/* Formatting for first column */
		if (col == 0)
		{
		printf("%d", product);
		}
		else
		{
		/* Format all other columns with comma and proper spacing */
		printf(", ");
                
		/* Add leading space for single-digit numbers */
		if (product < 10)
		{
			printf(" ");
			}
			printf("%d", product);
			}
		}
		/* New line at the end of each row */
		printf("\n");
	}
}
