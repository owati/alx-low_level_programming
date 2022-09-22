#include "main.h"

/**
 * _strcat - concat two strings
 * @dest: the destination
 * @src: the source
 * Return: the concated string
*/

char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (*(dest + count))
		count++;
	while (*src)
	{
		*(dest + count) = *src;
		count++;
		src++;
	}
	*(dest + count) = '\0';
	return (dest);
}
