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
	dog_t dog = {name, age, owner};

	return (&dog);
}
