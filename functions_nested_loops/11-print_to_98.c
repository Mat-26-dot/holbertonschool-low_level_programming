#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: is a counter
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	while (n <= 98)
	{
		print_number(n);
		if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
		}
		n++;
		}
	}
	else
	{
	while (n >= 98)
	{
		print_number(n);
		if (n != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
		n--;
		}
	}
	_putchar('\n');
}
/**
 * print_number - print individual numbers digit by digit.
 * @num: prints all natural numbers
 */
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
