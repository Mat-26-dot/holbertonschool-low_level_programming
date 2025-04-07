#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit (0 or 1), or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bits;

	/* Determine the maximum number of bits in an unsigned long int */
	max_bits = sizeof(unsigned long int) * 8; /* 8 bits per byte */

	/* Check if the index is valid (must be less than max_bits) */
	if (index >= max_bits)
	return (-1); /* Error: index out of range */

	/* Create a mask by shifting 1 to the left by 'index' positions */
	/* Then use bitwise AND to check if the bit is set */
	return ((n >> index) & 1);
}
