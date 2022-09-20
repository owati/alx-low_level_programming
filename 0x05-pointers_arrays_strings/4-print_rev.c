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
	char *start, *end, temp;
	int i;

	start = s;
	end = s;
	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

	while (*s)
		_putchar(*s);
	_putchar('\n');
}
