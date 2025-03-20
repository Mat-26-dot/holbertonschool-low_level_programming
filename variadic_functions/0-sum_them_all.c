#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all its parameters
 * @n: Number of arguments to be summed
 *
 * Return: Sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;
	int arg;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	arg = va_arg(args, int);
	sum += arg;
	}

	va_end(args);
	return (sum);
}
