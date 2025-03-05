#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard
 * @a: 2D array representing the chessboard
 *
 * This function takes a 2D array of characters representing a chessboard
 * and prints it to the console. Each element of the array corresponds to
 * a square on the chessboard, with the characters representing pieces or
 * empty squares.
 *
 */
void print_chessboard(char (*a)[8])
{

	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar (a[i][j]);
	}
		putchar('\n');
	}
}
