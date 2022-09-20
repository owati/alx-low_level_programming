#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: the pointer of the string to be checked
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	return (count);
}
