#include "main.h"

/**
 * print_numbers - prints all the digits
 * Return: void
*/

void print_numbers(void)
{
	char start;

	for (start = '0'; start <= '9'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
