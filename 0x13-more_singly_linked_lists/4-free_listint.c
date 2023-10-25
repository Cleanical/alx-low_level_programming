#include "lists.h"
/**
 * free+listint - function that frees the linked list
 * @head: pointer to first node of the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
