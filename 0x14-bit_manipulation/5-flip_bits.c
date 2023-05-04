#include "main.h"

/**
 * flip_bits - returns number of bits needed to
 * be flipped to get a num from another num
 * @n: first num
 * @m: second num
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val;
	unsigned int b_count = 0;

	val = n ^ m;

	while (val != 0)
	{
		b_count += val & 1;
		val >>= 1;
	}
	return (b_count);
}
