#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner
 * Return: the dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = malloc(sizeof(dog));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(owner));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
}
