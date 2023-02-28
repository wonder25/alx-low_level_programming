#include "main.h"

/**
 * puts2 - prints every other character of a 2 string
 * @str: the string printed
 * Return: void
 */

void puts2(char *str)
{
	int l, i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
