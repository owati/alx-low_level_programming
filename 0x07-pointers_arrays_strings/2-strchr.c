#include "main.h"

/**
 * _strchr - finds the first occurence of a char ina string
 * @s: the string
 * @c: the char
 * Return: the value
*/

char *_strchr(char *s, char c)
{
	unsigned int n = 0;

	for (; s[n]; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	return (NULL);
}
