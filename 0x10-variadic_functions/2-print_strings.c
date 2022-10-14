#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: the sep
 * @n: the number of values
 * @...: the values
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);
	for (; i < n; i++)
	{
		printf("%s", va_arg(ptr, char*));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
