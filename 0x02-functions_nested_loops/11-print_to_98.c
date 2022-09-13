#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from a number to 98
 * @n: the starting number
 *
 * Return: void
*/

void print_to_98(int n)
{
	do {
		if (n != 98)
			printf("%d, ", n);
		else
			prinf("%d", n);
		n < 98 ? n++ : n--;
	} while (n != 98);
	_putchar('\n');
}
