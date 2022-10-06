#include "main.h"
#include <stdlib.h>

/**
 * create_array - creats a string array with malloc
 * @size: the size of the array
 * @c: initialization char
 * Return: a pointer to the char
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int count = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (; count < size; count++)
	{
		ptr[count] = c;
	}
	return (ptr);
}
