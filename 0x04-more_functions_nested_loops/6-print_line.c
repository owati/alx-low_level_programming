#include "main.h"

/**
 * print_line -  prints a line of length n
 * @n: the lenght of the line
 * Return : void
*/

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
		_putchar('_');
	_putchar('\n');
}
