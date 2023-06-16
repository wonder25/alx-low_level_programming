#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: pointer to head of dlistint_t list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
