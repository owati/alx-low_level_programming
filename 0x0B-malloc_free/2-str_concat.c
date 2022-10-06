#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: the first
 * @s2: the second
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1;
	int len2;
	int i;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);
	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[i] = s2[i];
	ptr[len1 + len2] = '\0';
	return (ptr);
}
