#ifndef VAR
#define VAR

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct funcs - the stryct type to map functions
 *
 * @format: the format
 * @func: the function
*/

typedef struct funcs {
	char symbol;
	void (*func)(va_list arg);
} func_obj;
#endif
