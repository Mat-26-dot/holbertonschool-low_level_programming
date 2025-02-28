#include <limits.h>

/**
 *_atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of the converted string,
 * or INT_MAX/INT_MIN if overflow occurs.
 **/

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s)
	{
	if (*s == '-')
		sign *= -1;
	else if (*s >= '0' && *s <= '9')
	{
	digit = *s - '0';
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit >
		INT_MAX % 10))
		return ((sign == 1) ? INT_MAX : INT_MIN);
		result = result * 10 + digit;
	}
	else if (result != 0)
	break;
		s++;
	}

	return (result * sign);
}
