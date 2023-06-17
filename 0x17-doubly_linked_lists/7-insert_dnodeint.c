#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a specific position
 * @h: pointer to pointer to head of dlistint_t list
 * @idx: index where the node should be added
 * @n: data of new node
 * Return: address of new node, or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current != NULL && i < idx - 1)
	{
		i++;
		current = current->next;
	}

	if (current != NULL)
	{
		dlistint_t *new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = current->next;
		new_node->prev = current;

		if (current->next != NULL)
		{
			current->next->prev = new_node;
		}
		current->next = new_node;
		return (new_node);
	}
	return (NULL);

}
