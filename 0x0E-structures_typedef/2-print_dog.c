#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: the dog
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		if (d->age != NULL)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)");
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
