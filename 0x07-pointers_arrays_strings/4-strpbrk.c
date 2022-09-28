#include <stdbool.h>
#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - finds the first occurence
 * @s: the string
 * @accept: the search
 * Return: pointer to the first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int loop;

	do {
		for (loop = 0; accept[loop]; loop++)
		{
			if (*s == accept[loop])
				return (s);
		}
	} while (*s++);
	return (NULL);
}
