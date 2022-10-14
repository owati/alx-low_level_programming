#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @arg: the char
 * Return: void
*/

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, char));
}


/**
 * print_int - prints an int
 * @arg: the int
 * Return: void
*/

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: the float
 * Return: void
*/

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, float));
}

/**
 * print_string - prints a string
 * @arg: the string
 * Return: void
*/

void print_string(va_list arg)
{
	char *str = va_arg(arg, char*);

	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_all - print various data types
 * @format: the type format
 * @...: the values
 * Return: void
*/

void print_all(const char * const format, ...)
{
	va_list ptr;
	func_obj func_map[] = {
		{'c', &print_char},
		{'i', &print_int},
		{'f', &print_float},
		{'s', &print_string}
	}
	int i = 0;
	int j = 0;
	char *sep = "";

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(func_map[j].format)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			func_map[j].print(ptr);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
