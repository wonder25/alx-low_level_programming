#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 * Return: always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		--s;
		_putchar(*s);
	}
}
