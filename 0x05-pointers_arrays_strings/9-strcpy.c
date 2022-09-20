#include "main.h"

/**
 * _strcpy - copy on string to another
 * @dest: the destination string
 * @src: the source string
 * Return: char pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
