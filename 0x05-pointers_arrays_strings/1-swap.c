#include "main.h"

/**
 * swap_int - is the main function to swap integers
 * @a: is first parameter
 * @b: is second parameter
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
