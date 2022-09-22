#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: the length of the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (; i < n / 2; i++)
	{
		int end = n + i - 1;

		temp = *(a + i);
		*(a + i) = *(a + end);
		*(a + end) = temp;
	}
}
