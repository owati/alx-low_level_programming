#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: the sep
 * @n: the number of values
 * @...: the values
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);
	for (; i < n; i++)
		printf("%d%s", va_arg(ptr, int), separator != NULL ? separator : "");
	va_end(ptr);
	printf("\n");
}
