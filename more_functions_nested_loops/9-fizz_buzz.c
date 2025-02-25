#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1 to 100.
 * Multiples of 3 print "Fizz", multiples of 5 print "Buzz".
 * Multiples of both 3 and 5 print "FizzBuzz".
 * Each output is separated by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}
