#include "main.h"

/**
 * _strncat - concat two strings
 * @dest: the destination
 * @src: the source
 * @n: the amout of bit to be used
 * Return: the concated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int check = 0;

	while (*(dest + count))
		count++;
	while (*src && check < n)
	{
		*(dest + count) = *src;
		count++;
		src++;
		check++;
	}
	*(dest + count) = '\0';
	return (dest);
}
