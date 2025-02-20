#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

		if (n > 5)
		{
			printf("Last digit of %d is %d\n", n, last_digit);
		}
		else if (n == 0)
		{
			printf("%d and is 0\n", n);
		}
		else
		{
			printf("%d and is < than 6\n", n);
		}

		return (0);
}
