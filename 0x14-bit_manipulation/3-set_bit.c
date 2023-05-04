#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: pointer to a value
 * @index: index to set bit
 * Return: on success return 1, otherwise return -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
