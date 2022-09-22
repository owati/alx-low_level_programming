#include "main.h"

/**
 * _strncpy - copies a string to a destination
 * @dest: destination
 * @src: source
 * @n: the number of bytes
 * Return: the setination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && *src; i++)
	{
		*(dest + i) = *src;
		src++;
	}
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
