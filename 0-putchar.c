#include <unistd.h>

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	/*Character array str is initialized with str "_putchar"*/
	char str[] = "_putchar\n";
	/*int variable ini to 0 to iterate through str array*/
	int i = 0;

	while (str[i] != '\0') /*while loop continues until reaches '\0'*/
	{	 /*used to write single char to st output*/
		write(1, &str[i], 1);
		i++; /*used to iterate to the next char in the string*/
	}
	return (0);
}
