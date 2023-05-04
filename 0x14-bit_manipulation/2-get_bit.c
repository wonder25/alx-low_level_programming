#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @index: index, starts from 0
 * @n: number
 * Return: value of bit at index, otherwise returns -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
