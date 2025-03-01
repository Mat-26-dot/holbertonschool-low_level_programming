#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverses the content of an array of untegers
 * @a: Pointer to an array of integers
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start, end, temp;

	for (start = 0, end = n - 1; start < end; start++, end--)
	{

		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

	}

}
