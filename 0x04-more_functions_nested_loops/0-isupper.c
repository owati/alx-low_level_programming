#include "main.h"

/**
 * _isupper - checks if a function is uppercase
 * @c: the character to be checked
 * Return: either 1 or 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
