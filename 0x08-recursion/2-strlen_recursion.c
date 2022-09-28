#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: the string
 * Return: void
*/

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
