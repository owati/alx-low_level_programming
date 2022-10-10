#include "dog.h"

/**
 * init_dog - initialize a dog struct
 * @d: the dog
 * @name: the name of the dog
 * @age: the age
 * @owner: the owner
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
