#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: Always 0. (Success)
 */
void print_alphabet_x10(void)
{
	int i; /*outer loop counter*/
	char c; /*inner loop counter*/

	for (i = 0; i < 10; i++)/* outter loop prints alph x10*/
	{
		for (c = 'a'; c <= 'z'; c++)/* inner loop iterates a to z*/
		_putchar('c');
	}
	_putchar('\n');
}
