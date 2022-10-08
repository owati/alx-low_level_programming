#include <stdlib.h>
#include "main.h"

/**
 * populate - populates the array
 * @p: the array
 * @min: the start num
 * @max: the end value
 * Return: the value
*/

int *populate(int *p, int min, int max)
{
	int tmp = min;

	for (; min <= max; min++)
		p[min - tmp] = min;
	return (p);
}


/**
 * array_range - creates and initializes an array
 * @min: the minimum value
 * @max: the maximum value
 * Return: the array
*/

int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max -  min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	populate(ptr);
	return (ptr);
}
