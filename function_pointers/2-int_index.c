#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element in array
 * @array: Pointer to the integer array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to function used to compare values
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{

	if (cmp(array[i]))
		return (i);
	}

		return (-1);
}
