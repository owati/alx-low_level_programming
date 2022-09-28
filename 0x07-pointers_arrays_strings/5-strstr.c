#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * _strstr - find a needle in a heaysteack
 * @haystack: the searched string
 * @needle: the string to be searched
 * Return: the found string
*/

char *_strstr(char *haystack, char *needle)
{
	bool streak = false;
	char *tmp = needle;

	do {
		if (*haystack == *needle)
		{
			needle++;
		}
		else
		{
			if (streak && !*needle)
				return (haystack - strlen(tmp));
			streak = false;
		}
	} while (*++haystack);
	return (NULL);
}
