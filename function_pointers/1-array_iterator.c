#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - applies an action to each array element
 * @array: pointer to to first element of an integer array
 * @size: number of element in the array
 * @action: takes an integer pointer as input and returns void
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
