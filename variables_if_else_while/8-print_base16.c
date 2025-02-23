#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char ch = 0;

	while (ch <= 'f')
	{

		if ((ch <= '9') || (ch >= 'a'))

			putchar(ch);

		ch++;

	}

		putchar('\n');

			return (0);
}
