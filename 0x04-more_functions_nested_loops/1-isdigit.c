#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: the character to be checked
 * Return: either 1 or 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
