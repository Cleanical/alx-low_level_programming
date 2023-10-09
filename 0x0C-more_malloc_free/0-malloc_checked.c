#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - is the main function to allocate memory
 * @b: represents number of bytes to be allocated
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *p;


	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
