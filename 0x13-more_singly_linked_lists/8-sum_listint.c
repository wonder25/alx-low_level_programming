#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates sum of all data of the list
 * @head: pointer to the head
 * Return: if list empty return 0, otherwise sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
