#include <stdio.h>
#include "main.h"

/**
 * _strstr - find a needle in a heaysteack
 * @haystack: the searched string
 * @needle: the string to be searched
 * Return: the found string
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int count = 0;

	do {
		if (*haystack == needle[count])
			count++;
		else if (*haystack != needle[count] && needle[count])
			count = 0;
		else
			return (haystack - count);
	} while (*++haystack);
	if (count > 0 && !needle[count])
		return (haystack - count);
	return (NULL);
}
