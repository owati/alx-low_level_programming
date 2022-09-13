#include "main.h"

/**
 * main - the function to print the string
 *
 * Return: always 0
*/

int main(void)
{
	char word[] = "_putchar";
	char *str = word;

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
