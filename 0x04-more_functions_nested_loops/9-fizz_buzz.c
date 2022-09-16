#include <stdio.h>

/**
 * main - the fizzbuzz test
 * Return: 0
*/

int main(void)
{
	int start;

	for (start = 1; start <= 100; start++)
	{
		if (start % 15 == 0)
			printf("FizzBuzz ");
		else if (start % 5 == 0)
			printf("Buzz ");
		else if (start % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", start);
	}
	printf("\n");
	return (0);
}
