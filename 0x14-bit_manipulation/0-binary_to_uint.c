#include "main.h"

/**
 * binary_to_uint - converts binary num to an unsigned int
 * @b: pointer to binary string
 * Return: converted unsigned int or 0 on error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int c;

	if (!b)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] == '0' || b[c] == '1')
			n = 2 * n + (b[c] - '0');
		else
			return (0);
	}
	return (n);
}
