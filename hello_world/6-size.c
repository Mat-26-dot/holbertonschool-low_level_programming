#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char : %lu bytes\n", (int)sizeof(char));
	printf("Size of an int : %lu bytes\n", (int)sizeof(int));
	printf("Size of a long int : %lu bytes\n", (int)sizeof(long int));
	printf("Size of a long long int : %lu bytes\n", (int)sizeof(long long int));
	printf("Size of a float : %lu bytes\n", (int)sizeof(float));

	return (0);
}
