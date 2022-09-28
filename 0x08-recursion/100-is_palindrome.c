#include "main.h"
#include <string.h>

/**
 * check - recursive check
 * @s: the string
 * @start: the index
 * @size: the length
 * Return: 0 or 1
*/

int check(char *s, int start, int size)
{
	if (s[start] == s[size - start - 1])
	{
		if (start >= size / 2)
			return (1);
		return (check(*s, start + 1, size));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - finds if a string is a palindrome
 * @s: the string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len < 3)
	{
		return (1);
	}
	else
	{
		return (check(s, 0, len));
	}
}

