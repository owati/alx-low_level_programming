#include <stdio.h>

/**
 * main - prints tow digits number
 *
 * Return: always 0
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i != 8 && j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
