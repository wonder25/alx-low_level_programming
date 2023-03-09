#include "main.h"
/**
 * wildcmp - compare two strings
 * @s1: string to be checked
 * @s2: pattern to be used
 * Return: 0 (success)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')/*base arg*/
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')/*base arg*/
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
