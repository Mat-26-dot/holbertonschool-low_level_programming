#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: pointer to the first element of the array.
 * @n: number of elements to print.
 *
 * Description: This function prints the elements of an array of integers
 * separated by commas and spaces, followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);


	if (i < n - 1)
	{
		printf(", ");
	}
}

	printf("\n");
}
