#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of linked list
 * @head: pointer to pointer to the head of dlistint_t list
 * @n: value of new node
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end_node;

	/* allocate memory to new node */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* assign data and pointers to the new node */

	new_node->n = n;
	new_node->next = NULL;

	/* check if list is empty and make new node the head */

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* checks last node in list */
	end_node = *head;

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}

	end_node->next = new_node;
	new_node->prev = end_node;

	return (end_node);
}
