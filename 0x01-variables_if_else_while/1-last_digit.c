#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checking how positive the last digit is
 *
 * Return: always 0
*/

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %i is %i and", n, last_digit);
		printf(" is less than 6 and not 0\n");
	}
	return (0);
}
