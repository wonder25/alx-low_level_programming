#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to power of y
 * @x: number to be raised
 * @y: power number
 * Return: value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)/*base arg*/
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
