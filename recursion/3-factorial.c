#include "main.h"
#include <stdio.h>

/**
 * factorial - Computes the factorial of a given number.
 *
 * @n: The number for which the factorial is computed.
 *
 * Return: The factorial of n if n is greater than or equal to 0,
 * or -1 if n is less than 0 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

		if (n == 0)
		{
		return (1);
		}

	return (n * factorial(n - 1));
}
