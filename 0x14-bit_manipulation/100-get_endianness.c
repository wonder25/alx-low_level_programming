#include "main.h"

/**
 * get_endianness - gets endianness and returns int
 * based on the val of int result
 * Return: int value endianness
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
