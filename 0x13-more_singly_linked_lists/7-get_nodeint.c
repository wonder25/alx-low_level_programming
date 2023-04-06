#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - locates given node of a list
 * @head: pointer to the head node
 * @index: index of node to locate
 * Return: if node doesn't exist return NULL, otherwise return
 * located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
