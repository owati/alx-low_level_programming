#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string
 * Return: pointer to the new string
*/

char *_strdup(char *str)
{
	unsigned int len;
	unsigned int count;
	char *ptr;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (count = 0; count < len; count++)
		ptr[count] = str[count];
	return (ptr);
}
