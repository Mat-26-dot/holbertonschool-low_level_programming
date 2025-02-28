#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;


	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9') && 
		s[i] != '+' && s[i] != '-')
	{
		i++;
	}


	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;

		i++;

	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

		return (result * sign);
}
