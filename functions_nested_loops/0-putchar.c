#include <unistd.h>

/**
 * main - prints "_putchar", followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Define and initialize the string */
	char str[] = "_putchar\n";
	int i = 0; /* Initialize the integer variable i */

	/* Loop through each character in the string until '\0' is encountered */
	while (str[i] != '\0')
	{
		/* Write a single character to standard output */
		write(1, &str[i], 1);
		i++; /* Move to the next character */
	}

	return (0); /* Return success */
}
