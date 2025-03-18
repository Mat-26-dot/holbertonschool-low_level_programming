#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the newly created dog_t
 * structure, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (!my_dog)
		return (NULL);

	my_dog->name = malloc(strlen(name) + 1);

	if (!my_dog->name)
	{	free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(strlen(owner) + 1);

	if (!my_dog->owner)
	{	free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->name, name);
	strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
