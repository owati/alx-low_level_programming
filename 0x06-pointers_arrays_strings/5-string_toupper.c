#include "main.h"

/**
 * string_toupper - capitalizes a string
 * @str: the string to be capitalized
 * Return: a pointer to the string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) -= 32;
		i++;
	}
	return (str);
}
