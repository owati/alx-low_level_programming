#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all the number
 * @n: the number of values
 * @...: the values
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
