#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if lower or 0
*/

int _islower(int c)
{
	if (c < 97 || c > 122)
		return (1);
	return (0);
}
