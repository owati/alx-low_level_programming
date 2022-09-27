#include "main.h"

/**
 * _memcpy - copies parts of a string in a string
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 * Return: the modified location
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num = 0;

	for (; num < n; num++)
		dest[num] = src[num];
	return (dest);
}
