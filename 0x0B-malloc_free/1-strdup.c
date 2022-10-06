#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string
 * Return: pointer to the new string
*/

char *_strdup(char *str)
{
	unsigned int len = strlen(str);
	unsigned int count = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (; count < len; count++)
		ptr[count] = str[count];
	return (ptr);
}
