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
	int len = 0, i, concat_i = 0;
	char *concat_string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	/* get length */

	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	concat_string = malloc(sizeof(char) * len);

	if (concat_string == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_string[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_string[concat_i++] = s2[i];

	return (concat_string);
}
