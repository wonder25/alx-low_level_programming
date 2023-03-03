#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the resulting string *dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		_putchar(src[j]);
	}
	_putchar('\n');
	return (dest);
}
