#include "main.h"

/**
 * get_prime - finds the prime
 * @num: the number
 * @start: the starting number
 * Return: 1 or 0
*/

int get_prime(int num, int start)
{
	if (num < 2)
		return (0);
	else if (num == 2 || num == 3)
		return (1);
	else if (num % start == 0)
		return (0);
	else if (start >= num / 2)
		return (1);
	else
		return (get_prime(num, start + 1));
}

/**
 * is_prime_number - finds a prime number
 * @n: the number
 * Return: the answer
*/

int is_prime_number(int n)
{
	return (get_prime(n, 2));
}
