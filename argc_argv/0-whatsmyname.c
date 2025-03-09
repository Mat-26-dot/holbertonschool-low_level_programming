#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the name of the program, followed by a new line.
 * @argc: The number of command-line arguments (unused).
 * @argv: An array containing the program name and command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
