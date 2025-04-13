#include <stdlib.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the number to modify
 * @index: Index of the bit to set (starting from 0)
 * Return: 1 if successful, -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL || index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
