#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit will be cleared.
 * @index: The index (starting from 0) of the bit to clear.
 * Return: 1 if successful, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is out of bounds (exceeds bit width of unsigned long) */
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	/* Clear the bit at 'index' using bitwise AND with a complemented mask */
	*n &= ~(1UL << index);
	return (1);
}
