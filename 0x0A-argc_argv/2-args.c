#include <stdio.h>

/**
 * main - is the main function
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments of the program
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
