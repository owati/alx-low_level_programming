#include "main.h"

/**
 * _puts_recursion - prints a string wiht recursion
 * @s: the string to be printed
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

