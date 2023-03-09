#include "main.h"
/**
 * _strlen_recursion - function which returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
/* length of string*/
	int len = 0;

	if (*s != '\0') /* base arg*/
	{
		len++;
		len = _strlen_recursion(s + 1) + len;
	}
	return (len);
}
