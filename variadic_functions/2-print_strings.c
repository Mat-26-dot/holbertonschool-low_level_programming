#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed between the strings (or NULL)
 * @n: Number of strings passed to the function
 * @...: Variable number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *current_str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	current_str = va_arg(args, const char *);

	if (current_str == NULL)
		printf("(nil)");
	else
		printf("%s", current_str);

	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

