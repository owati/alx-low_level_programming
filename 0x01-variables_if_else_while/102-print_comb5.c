#include <stdio.h>

/**
 * main - prints tow digits number
 *
 * Return: always 0
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar(48 + (int)(i / 10));
			putchar(48 + (i % 10));
			putchar(' ');
			putchar(48 + (int)(j / 10));
			putchar(48 + (j % 10));
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
