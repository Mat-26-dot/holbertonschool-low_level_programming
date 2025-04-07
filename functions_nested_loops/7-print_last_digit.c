#include <unistd.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to process
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	char digit_char;

	/* Ensure the digit is positive */
	if (last_digit < 0)
	last_digit = -last_digit;

	/* Convert the digit to its ASCII character */
	digit_char = '0' + last_digit;

	/* Write using the allowed write() syscall */
	write(1, &digit_char, 1);

	return (last_digit);
}
