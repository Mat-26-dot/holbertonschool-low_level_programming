#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name using given function
 * @name: name to be printed
 * @f: Pointer to a function that prints a string
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && f != NULL)
		f(name);
}
