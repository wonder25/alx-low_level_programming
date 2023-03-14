#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0, i = 0, concat_i = 0;
	char *concat_string;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");
	/* get length */

	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	concat_string = malloc(sizeof(char) * len);
	
	if (concat_string == NULL)
		return (NULL);
	
	while (s1[i])
	{
		concat_string[concat_i++] = s1[i];
		i++;
	}

	while (s2[i])
	{
		concat_string[concat_i] = s2[i];
		i++;
	}
	return (concat_string);
}
