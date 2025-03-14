#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory of size b bytes
 * @b: bytes of memory
 * Return: checked
 */
void *malloc_checked(unsigned int b)
{
	int *checked;

	checked = malloc(b);

	if (checked == NULL)
		exit(98);

	return (checked);
}
