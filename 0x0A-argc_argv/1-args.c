#include <stdio.h>

/**
 * main - is the main function that prints number of args passed into it
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments of the program
 * Return: 0 (successful).
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
/** char *argv[] can als be char **arg */

	printf("%d\n", argc - 1); /* -1 to subtract the NULL*/
	return (0);
}
