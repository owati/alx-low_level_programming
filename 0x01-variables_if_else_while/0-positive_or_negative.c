#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - generates a random function and checks it is positive or negative
 *
 *Description: checking whether a number is positive ir negative
 *Return: always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
