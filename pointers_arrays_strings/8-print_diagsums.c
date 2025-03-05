#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: Size of the matrix
 *
 * Description: This function calculates and prints the sum of the
 * main diagonal
 *
 */
void print_diagsums(int *a, int size)
{
	long int sum1 = 0;
	long int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{

		sum1 += a[i * size + i];

		sum2 += a[i * size + (size - 1 - i)];

	}
		printf("%ld, %ld\n", sum1, sum2);
}

