#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integars
 *
 * @a: Pointer to the first integar
 *
 * @b: Pointer to the second integar
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
