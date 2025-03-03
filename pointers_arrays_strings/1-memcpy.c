#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area
 * Description: Copies n bytes from memory area
 * src to memory area dest src to memory
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: Number of bytes to copy.
 * Return: A pointer to it's destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *original_dest = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

		return (original_dest);
}
