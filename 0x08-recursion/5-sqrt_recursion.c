#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to find square root of
 * Return: returns square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_root(n, 0));
}
/**
 * actual_root - find the natural square root of a number
 * @n: number to calculate the sqrt
 * @i: iterator
 * Return: the square root
 */
int actual_root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
		return (actual_root(n, i + 1));
}
