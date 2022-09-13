#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be tested
 *
 * Return: the last digit of the number
*/

int print_last_digit(int n)
{
	int last_num;

	last_num = n % 10;
	if (last_num < 0)
		last_num *= -1;
	_putchar('0' + last_num);
	return (last_num);
}
