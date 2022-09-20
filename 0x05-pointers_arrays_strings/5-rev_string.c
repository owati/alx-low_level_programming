#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string array
 * @s: the string to be changed
 * Return: void
*/

void rev_string(char *s)
{
	int len = strlen(s);
	char *start, *end, temp;
	int i;

	start = s;
	end = s;
	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
