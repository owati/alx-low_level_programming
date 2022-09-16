#include "main.h"

/**
 * print_diagonal - prints digonal of line n
 * @n: the length of the diagonal
 * Return: void
*/

void print_diagonal(int n)
{
	int count, i;

	for (count = 0; count < n; count++)
	{
		for (i = 1; i < count; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
