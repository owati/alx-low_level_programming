#include "main.h"

/**
 * jack_bauer - prints all the minutes of the day
 *
 * Return: void
*/

void jack_bauer(void)
{
	int min_count = 0;

	while (min_count < 1441)
	{
		int hours = min_count / 60;
		int min = min_count % 60;

		_putchar('0' + (int)(hours / 10));
		_putchar('0' + (int)(hours % 10));
		_putchar(':');
		_putchar('0' + (int)(min / 10));
		_putchar('0' + (int)(min % 10));
		_putchar('\n');
		min_count++;
	}
}

