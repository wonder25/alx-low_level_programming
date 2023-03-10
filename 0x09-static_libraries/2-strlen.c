#include "main.h"

/**
 * _strlen - function that returns length of a string
 * @s: length of s string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
