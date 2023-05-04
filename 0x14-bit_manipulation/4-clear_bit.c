#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer to value
 * @index: index to set bit
 * Return: 1 on success, otherwise -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
