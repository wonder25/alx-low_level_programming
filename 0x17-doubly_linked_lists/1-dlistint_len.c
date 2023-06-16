#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint_t list
 * @h: pointer to head of list
 * Return: number of elements in dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
