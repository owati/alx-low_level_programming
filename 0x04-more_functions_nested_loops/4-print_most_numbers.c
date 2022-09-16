#include "main.h"

/**
 * print_most_numbers - prints all the digits except 2 and 4
 * Return: void
*/

void print_most_numbers(void)
{
	char start;

	for (start = '0'; start <= '9'; start++)
	{
		if (start == '2' || start == '4')
			continue;
		_putchar(start);
	}
	_putchar('\n');
}
