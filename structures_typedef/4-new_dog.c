#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	len++;
	return (len);
}

/**
 * _strcpy - Copies a string
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the newly created dog_t structure, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
	return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	return (NULL);

	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (my_dog->name == NULL)
	{
	free(my_dog);
	return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
	free(my_dog->name);
	free(my_dog);
	return (NULL);
	}

	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
