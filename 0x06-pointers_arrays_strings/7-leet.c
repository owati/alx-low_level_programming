#include "main.h"

/**
 * leet - encodes a string
 * @str: string to be encoded
 * Return: the pointer to encoded
*/

char *leet(char *str)
{
	int replace[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	char allowed[] = "aAeEoOtTlL";
	int i = 0;

	for (; *(str + i); i++)
	{
		char temp = *(s + i);
		int index = 0;

		for (; allowed[index]; index++)
		{
			if (allowed[index] == temp)
			{
				*(s + i) = '0' + replace[index];
				break;
			}
		}
	}
	return (str);
}
