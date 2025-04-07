#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t i;

	if (b == NULL)	/* Edge case: NULL pointer */
		return (0);

	for (i = 0; b[i] != '\0'; i++) /* Process each character */
	{
		/* Validate character */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Shift and add the bit */
		result = (result << 1) + (b[i] - '0');
	}
		return (result);
}
