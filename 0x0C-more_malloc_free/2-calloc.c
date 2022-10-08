#include <stdlib.h>
#include "main.h"

/**
 * settozero - initializes the array to zero
 * @p: the pointer
 * @n: the size
 * Return: the pointer
*/

char *settozero(char *p, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		p[i] = 0;
	return (p);
}

/**
 * _calloc - malloc with extra steps
 * @nmemb: the number
 * @size: the size
 * Return: the pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	settozero(ptr, nmemb * size);
	return (ptr);
}
