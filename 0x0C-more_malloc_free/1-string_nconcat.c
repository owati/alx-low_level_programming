#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two string
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of the second string
 * Return: a pointer to the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	int len1 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	if (len1 != 0)
	{
		for (i = 0; s1[i]; i++)
			ptr[i] = s1[i];
	}
	if  (s2 != NULL)
	{
		for (i = 0; i < n && s2[i]; i++)
			ptr[i + len1] = s2[i];
		ptr[i + len1] = '\0';
	}
	return (ptr);
}
