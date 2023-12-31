#include "lists.h"
/**
 * pop_listint - deletes first node of a list and retunsits data
 * @head: the poimter to the list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
