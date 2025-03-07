#include "main.h"

/**
 * sqrt_helper - This helper function is intended to assess whether
 * i multiplied by itself equals n, effectively checking if i
 * is the natural square root of n.
 *
 * @n: The number to find the square root of
 * @i: The current guess for the square root
 * Return: The natural square root if found, -1 otherwise
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
		if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if n has no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}
