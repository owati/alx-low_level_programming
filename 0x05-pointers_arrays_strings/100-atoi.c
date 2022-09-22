#include <string.h>
#include <stdbool.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: the number
*/
int pow(int a, int b);

int _atoi(char *s)
{
	int len = strlen(s);
	bool positive = true;
	bool hasSeenNumber = false;
	int sum = 0;
	int count = 0;

	while (count < len)
	{
		int num_equiv;
		char letter = *(s + count);

		if (letter < '0' && letter > '9')
		{
			if (hasSeenNumber)
				break;
			if (letter == '-')
				positive = !positive;
			continue;
		}
		hasSeenNumber = true;
		num_equiv = letter - '0';
		sum = sum * pow(10, count) + num_equiv;
		count++;
	}
	return (positive ? sum : -1 * sum);
}

int pow(int a, int b)
{
	int temp = a;

	if (a == 0)
		return (0);
	if (b == 0)
		return (1);
	while (b--)
	{
		a *= temp;
	}
	return (a);
}
