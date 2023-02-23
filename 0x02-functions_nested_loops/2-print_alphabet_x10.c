#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * Description: Prints alphabet in lowercase x10
 * Return: x10 (success)
*/
void print_alphabet_x10(void)
{
	int k, d;

	d = 0;

	while (d < 10)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		d++;
		_putchar('\n');
	}
}
