#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t list
 * @head: pointer to pointer to head of dlistint_t list
 * @index: index of the node to be deleted
 * Return: 1 if successful, -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	current = *head;
	previous = NULL;

	while (current)
	{
		if (i == index && previous != NULL)
			previous->next = current->next;

		if (i == index)
		{
			if (current->next != NULL)
				current->next->prev = previous;
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (-1);
}
