#include "main.h"

/**
 * _puts- prints  string to stdout
 * @str: the string to be printed
 * Return: void
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
