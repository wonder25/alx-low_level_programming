#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a linked list
 * @head: pointer to pointer of head of the dlistint_t list
 * @n: int vakue of new node
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* assign data and pointer to new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
