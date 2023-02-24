#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			_putchar('#');
			for (b = 2; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
