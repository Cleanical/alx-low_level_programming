#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
int d;
char c;

for (d = 1; d <= 10; d++)
{
	for (c = 'a'; c <= 'z'; c++)

	{
	_putchar(c);
	}

	_putchar('\n');

_putchar(d);
_putchar('\n');
}

}
