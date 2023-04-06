#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head of a list
 * @head: pointer to address of head node
 * Return: if linked list empty return 0, otherwise return value at head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}
