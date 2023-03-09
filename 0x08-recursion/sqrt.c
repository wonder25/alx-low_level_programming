#include "main.h"
/**
 * actual_root - find the natural square root of a number
 * @n: number to calculate the sqrt
 * @i: iterator
 * Return: the square root
 */
int actual_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_root(n, i + 1));
}
