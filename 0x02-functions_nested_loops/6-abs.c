#include "main.h"

/**
 * _abs - computes the absolute of an integer
 * @num: the number to be converted
 *
 * Return: The absolute valye
*/

int _abs(int num)
{
	if (num < 0)
		return (-1 * num);
	return (num);
}
