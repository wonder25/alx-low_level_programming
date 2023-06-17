#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data of the linked list
 * @head: pointer to head of dlistint list
 * Return: sum of data, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
