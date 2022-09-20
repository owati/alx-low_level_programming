#include "main.h"

/**
 * swap_int - exchanges the value of two variables
 * @a: the first to be exchanged
 * @b: the second to be exchanged
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
