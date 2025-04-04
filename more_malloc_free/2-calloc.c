#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdint.h>
/**
 * _calloc - allocates memory to an array
 * @size: size in bytes of each element
 * @nmemb: represents number of elements in the array
 * Return: memory_block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory_block;
	unsigned int total_size;
	unsigned char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	total_size = nmemb * size;
	if (size != 0 && nmemb > (SIZE_MAX / size))
	return (NULL);

	memory_block = malloc(total_size);
	if (memory_block == NULL)
	return (NULL);

	ptr = (unsigned char *)memory_block;
	for (i = 0; i < total_size; i++)
	ptr[i] = 0;

	return (memory_block);
}
