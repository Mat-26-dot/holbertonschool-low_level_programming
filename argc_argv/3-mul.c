#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 *
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		int (result) = num1 * num2;

		printf("%d\n", result);

			return (0);
	}
	else
	{
		printf("Error\n");
	}

		return (1);
}
