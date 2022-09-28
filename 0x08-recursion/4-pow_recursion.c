#include "main.h"

/**
 * _pow_recursion - find a number to aprticluar power
 * @x: the numbser
 * @y: the power
 * Return: the value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(y - 1));
}
