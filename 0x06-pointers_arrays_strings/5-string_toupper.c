#include "main.h"

/**
 * string_toupper - Function that change all lowercase to uppercase
 *
 * @s: s is the array
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if ((s[c] >= 97) && (s[c] <= 122))
		{
			s[c] = s[c] - 32;
		}
	c++;
	}
	return (s);
}
