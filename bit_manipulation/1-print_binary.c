#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int started = 0; /* Flag to skip leading zeros */

	if (n == 0) /* Handle the special case where n is 0 */
	{
		putchar ('0');
		return;
	}

	/* Initialize mask to the highest possible bit */
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	/* Iterate through each bit */
	while (mask > 0)
	{
		/* Check if current bit is set */
		if (n & mask)
		{
			putchar('1');
			started = 1; /* We've found the first '1' */
		}
		else if (started)
		{
			/* Only print '0' if we're past leading zeros */
			putchar('0');
		}

		/* Move mask to the next bit */
		mask >>= 1;
	}
}
