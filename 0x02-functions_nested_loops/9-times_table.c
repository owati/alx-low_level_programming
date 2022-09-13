#include "main.h"

/**
 * times_table - prints out the times table
 *
 * Return: void
*/

void times_table(void)
{
	int row;
	int col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			int mult = row * col;

			if (col == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}
			_putchar(' ');
			if (mult > 9)
			{
				_putchar('0' + (int)(mult / 10));
				_putchar('0' + (int)(mult % 10));
			}
			else
			{
				_putchar(' ');
				_putchar('0' + mult);
			}
			if (col != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
