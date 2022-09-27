#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds the first occurence of a char ina string
 * @s: the string
 * @c: the char
 * Return: the value
*/

char *_strchr(char *s, char c)
{
	do {
		if (s == c)
			return (s);
	} while (*s++)
	return (NULL);
}
