#include "main.h"

/**
 * _memset - fills the first n bytes to a particular char
 * @s: the string
 * @b: the char
 * @n: the number of bytes
 * Return: char pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num = 0;

	for (; s[num] || num < n; num++)
		s[num] = b;
	return (s);
}

