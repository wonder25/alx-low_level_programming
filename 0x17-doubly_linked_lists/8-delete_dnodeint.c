#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t list
 * @head: pointer to pointer to head of dlistint_t list
 * @index: index of the node to be deleted
 * Return: 1 if successful, -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		i++;
		current = current->next;
	}

	if (current != NULL)
	{
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
		current->prev->next = current->next;
		free(current);
		return (1);
	}
	return (-1);
}
