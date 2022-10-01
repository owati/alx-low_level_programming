#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that calculates the multiplication of two numbers
 * @argc: the number of arguement provided
 * @argv: the array of the arguements
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int mult = 1;

	for (; i < argc; i++)
		mult *= atoi(argv[i]);
	printf("%d\n", mult);
	return (0);
}
