#include "lists.h"
#include <stdio.h>

/**
 * free_listint - function that frees a listint list
 * @head: pointer to head
 * Return: null
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);

		head = temp;
	}
}
