#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	
	if (argc == 1)
	{	printf("0\n");
		
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);

	}
		return (0);
}
