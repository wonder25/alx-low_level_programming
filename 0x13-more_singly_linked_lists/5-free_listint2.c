#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to head
 * Return: null
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return;

	temp = *head;

	while (temp)
	{
		next_node = temp;
		free(temp);
		temp = next_node;
	}
	*head = NULL;
}
