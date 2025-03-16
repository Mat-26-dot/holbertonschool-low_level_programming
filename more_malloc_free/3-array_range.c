#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: minimum range of numbers stored in array
 * @max: maximum range of numbers stored in array
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int i;
	int size;

	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (size = max - min + 1));

	if (arr == (NULL))

	for (i = 0; i < size; i++)
	{	
	arr[i] = min + i;
		i++;
	}
		return (arr);
}
