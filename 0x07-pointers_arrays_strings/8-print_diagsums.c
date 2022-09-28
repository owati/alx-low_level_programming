#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - nice
 * @a: nice
 * @size: nice
 * Return: voud
*/

void print_diagsums(int *a, int size)
{
	unsigned int num = 0;
	int diag1 = 0;
	int diag2 = 0;

	for (; num < size; num++)
	{
		diag1 += a[num][num];
		diag2 += a[num][size - num - 1];
	}
	printf("%d, %d\n", diag1, diag2);
}

