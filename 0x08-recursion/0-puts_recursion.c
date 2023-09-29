#include "main.h"

/**
 * _puts_recursion - this is the main function
 * @s: parameter of the function
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else 
	_putchar('\n');

}
