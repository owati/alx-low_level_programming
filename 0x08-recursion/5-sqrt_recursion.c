#include "main.h"

/**
 * sqrt_check - dues the checking
 * @check: the number
 * @num: the number
 * Return: the value
*/

int sqrt_check(int check, int num)
{
	if (check * check == num)
		return (check);
	else if (check <= 1)
		return (-1);
	else
		return (sqrt_check(check - 1, num));
}

/**
 * _sqrt_recursion - find the square root of a number
 * @n: the number
 * Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (sqrt_check(n / 2, n));
}
