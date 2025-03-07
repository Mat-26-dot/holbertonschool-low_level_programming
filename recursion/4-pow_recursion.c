#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value, which cannot be negative.
 *
 * If y is less than 0, the function returns -1.
 * This function uses recursion to compute the power.
 *
 * Return: The value of x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);

	}
	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
