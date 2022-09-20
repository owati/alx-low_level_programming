#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: void
*/

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
