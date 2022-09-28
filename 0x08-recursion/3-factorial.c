#include "main.h"

/**
 * factorial - finds the factorial a positive integer
 * @n: the number
 * Return: the factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
