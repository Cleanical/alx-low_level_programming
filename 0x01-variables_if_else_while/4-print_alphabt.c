#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase and upper case
 * Return: always 0
 */
int main(void)
	{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)

	{
	if (alph != 'e' &&  alph != 'q')
	putchar(alph);
	}
	putchar('\n');
	return (0);

	}
