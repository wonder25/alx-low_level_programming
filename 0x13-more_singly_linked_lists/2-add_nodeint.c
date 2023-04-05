#include "lists.h"

/**
 * add_nodeint - adds a new code at the beginning of a list
 * @head: pointer to the address of the head of the list
 * @n: the integer for the new node
 * Return: function fails returns null, if !null returns address
 * of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
