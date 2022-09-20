#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: steh string
 * Return: void
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int start;

	start = len / 2;
	while (*(str + start))
	{
		_putchar(*(str + start));
		start++;
	}
	_putchar('\n');
}
