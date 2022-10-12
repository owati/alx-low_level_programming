#include "function_pointers.h"

/**
 * print_name - prints  the name using a function
 * @name: the name to be printed
 * @f: the function that will print
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
