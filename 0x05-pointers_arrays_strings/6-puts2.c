#include <stdbool.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the string
 * Return: void
*/

void puts2(char *str)
{
	bool toggle = true;

	while (*str)
	{
		if (toggle)
			_putchar(*str);
		str++;
		toggle = !toggle;
	}
}
