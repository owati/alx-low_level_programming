#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>


/**
 * is_int - finds if a str is a valid int
 * @str: the string
 * Return: true or false
*/

bool is_int(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (false);
		str++;
	}
	return (true);
}

/**
 * main - the main function
 * @argc: the number of the arguements
 * @argv: the list pf arguements
 * Return: either 1 or 0
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	for (; i < argc; i++)
	{
		if (!is_int(argv[i])
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	if (i == 1)
		printf("0\n");
	else
		printf("%d\n", sum);
	return (0);
}
