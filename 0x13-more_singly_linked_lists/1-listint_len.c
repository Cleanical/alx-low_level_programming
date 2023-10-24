#include "lists.h"
/**
 * print_listint - function to count and print the number of elements in a list
 * @h: header pointer
 * Return: number of elemnts present in this list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);

}
