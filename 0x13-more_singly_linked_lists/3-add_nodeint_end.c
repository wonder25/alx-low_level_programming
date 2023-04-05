#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds new node at the end of list
 * @head: pointer to the address of the head of the list
 * @n: integer value for the new node
 * Return: function fails returns NULL, passes returns address of the newnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
