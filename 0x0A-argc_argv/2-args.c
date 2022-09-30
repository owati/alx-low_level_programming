#include <stdio.h>

/**
 * main - prints the name off the file
 * @argc: the lenght of the commandlinr
 * @argv: the command line arguements
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
