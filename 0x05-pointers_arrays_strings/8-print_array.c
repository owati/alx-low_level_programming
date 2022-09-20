#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the number of array
 * @a: the array
 * @n: the number of items
 * Return: void
*/

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", *(a + count));
		if (count != (n - 1))
			printf(", ");
	}
	_putchar('\n');
}
