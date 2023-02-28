#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of integers
 * @a: input array
 * @n: input number of elements
 *Return: void
 */

void  print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", *(a + count));

		if (count != (n - 1))
			printf(", ");
	}
	printf("\n");
}
