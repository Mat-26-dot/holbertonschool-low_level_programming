#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Updates the value a pointer points to 98
 *
 * @n: Pointer to an integer whose value will be updated
 *
 * Description: This function takes a pointer to an int as a parameter
 * and updates the value it points to, setting it to 98
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	*n = 98;

}
