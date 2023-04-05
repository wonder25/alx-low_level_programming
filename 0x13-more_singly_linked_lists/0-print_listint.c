#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
