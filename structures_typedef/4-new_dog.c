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

	while (s[len]) /*keep going until you hit the end*/
	len++;	      /*count each character*/
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
	dest[i] = src[i]; /*copy each character*/
	i++;
	}
	dest[i] = '\0'; /*add the full stop at the end*/
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
	/*check if we have all the information*/
	if (name == NULL || owner == NULL)
	return (NULL);
	/*create the passport (dog structure*/
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	return (NULL);
	/*allocate space for the name in the passport*/
	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (my_dog->name == NULL)
	{
	free(my_dog);
	return (NULL);
	}
	/*allocate space for the owner's name in the passport*/
	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
	free(my_dog->name);
	free(my_dog);
	return (NULL);
	}
	/*fill in the passport details*/
	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
