#include "main.h"
#include <stdbool.h>

/**
 * _strspn - find s apsn ina string
 * @s: the string
 * @accept: the check string
 * Return: the position number
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;

	for (; s[num]; num++)
	{
		unsigned int loop =  0;
		bool check = false;

		for (; accept[loop]; loop++)
		{
			if (accept[loop] == s[num])
			{
				check = true;
				break;
			}
		}
		if (!check)
			return (num);
	}
	return (0);
}
