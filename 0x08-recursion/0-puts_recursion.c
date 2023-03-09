#include "main.h"
/**
 * _puts_recursion - function that prints a string followed by newline
 * @s: pointer s
 * Return: always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1); /**loops through the index one by one*/
	}
}
