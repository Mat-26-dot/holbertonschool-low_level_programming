#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: number whose bits are being compared
 * @m: target number to which n must be converted
 * Return: the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	unsigned int count = 0;

	while (xor_result > 0)
	{	count += xor_result & 1;	/* Check if the LSB is 1 */
		xor_result >>= 1;	/* Right-shift to check the next bit */
	}

	return (count);
}
