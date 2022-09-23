#include "main.h"

/**
 * is_term - checks if a character is a terminator
 * @s: the char to be checked
 * Return: 1 or 0
*/
int is_term(char s)
{
	char terms[] = " \t\n,;.!?\"(){}";
	char *ptr = terms;
	int n = 0;

	for (; *(ptr + n); n++)
	{
		if (*(ptr + n) == s)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalize all the valid words in a string
 * @str: the string to be changed
 * Return: the address of the string
*/

char *cap_string(char *str)
{
	int i = 0;

	for (; *(str + i); i++)
	{
		char temp = *(str + i);

		if (temp >= 'a' && temp <= 'z')
		{
			if (i == 0 || is_term(*(str + i - 1)))
				*(str + i) = temp - 32;
		}
	}
	return (str);
}
