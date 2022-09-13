#include "main.h"

/**
 * _isalpha - checks if a char is an alphabet
 * @c: the char to be checked
 *
 * Return: 1 if c is an alphabet else 0
*/

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 94 && c < 123))
		return (1);
	return (0);
}
