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
	unsigned int count = 0;

	do {
		if (*haystack == needle[count])
		{
			streak = true;
			count++;
		}
		else if (*haystack != needle[count] && needle[count])
		{
			streak = false;
			count = 0;
		}
		else
		{
			return (haystack - count);
		}
	} while (*++haystack);
	if (count > 0 && !needle[count])
		return (haystack - count);
	return (NULL);
}
