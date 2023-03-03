#include "main.h"

/**
 * reverse_array - Function that reverses the elements of an array
 *
 * @a: a is the array
 * @n: Where n is the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i = 0; i < n--; i++)
	{
		p = a[i];
		a[i] = a[n];
		a[n] = p;
	}
}
